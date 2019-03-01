
namespace Interop\Queue\Exception;

use Throwable;

class TimeToLiveNotSupportedException extends Exception
{
    /**
     * @param int $code
     * @param \Throwable $previous
     *
     * @return static
     */
    public static function providerDoestNotSupportIt(int code = 0, <Throwable> previous = null) -> <TimeToLiveNotSupportedException>
    {
        return new TimeToLiveNotSupportedException(
            "The provider does not support time to live feature",
            code,
            previous
        );
    }
}
