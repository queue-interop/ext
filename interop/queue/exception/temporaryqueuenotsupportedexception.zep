
namespace Interop\Queue\Exception;

use Throwable;

class TemporaryQueueNotSupportedException extends Exception
{
    /**
     * @param int $code
     * @param \Throwable $previous
     *
     * @return static
     */
    public static function providerDoestNotSupportIt(int code = 0, <Throwable> previous = null) -> <TemporaryQueueNotSupportedException>
    {
        return new TemporaryQueueNotSupportedException(
            "The provider does not support temporary queue feature",
            code,
            previous
        );
    }
}
