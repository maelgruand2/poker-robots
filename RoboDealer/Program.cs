using System.Runtime.InteropServices;

Console.WriteLine($"Réponse du moteur C++ {NativeBridge.PingEngine(21)}");

internal static partial class NativeBridge
{
    [LibraryImport("RoboDealer.Native.dll")]
    internal static partial int PingEngine(int value);
}