
namespace Interop\Queue\Exception;

class InvalidDestinationException extends Exception
{
    /**
     * @param mixed  $destination
     * @param string $class
     *
     * @throws static
     */
    public static function assertDestinationInstanceOf(var destination, string className) -> void
    {
        var name;

        if typeof destination === "object" {
            let name = get_class(destination);
        } else {
            let name = gettype(destination);
        }

        if !(destination instanceof className) {
            throw new InvalidDestinationException(
                "The destination must be an instance of " . className . " but got " . name . "."
            );
        }
    }
}
