
namespace Interop\Queue\Exception;

use Throwable;

class PurgeQueueNotSupportedException extends Exception
{
    /**
     * @param int $code
     * @param \Throwable $previous
     *
     * @return static
     */
    public static function providerDoestNotSupportIt(int code = 0, <Throwable> previous = null) -> <PurgeQueueNotSupportedException>
    {
        return new PurgeQueueNotSupportedException(
            "The provider does not support purge queue.",
            code,
            previous
        );
    }
}
