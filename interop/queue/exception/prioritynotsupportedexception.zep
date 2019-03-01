
namespace Interop\Queue\Exception;

use Throwable;

class PriorityNotSupportedException extends Exception
{
    /**
     * @param int $code
     * @param \Throwable $previous
     *
     * @return static
     */
    public static function providerDoestNotSupportIt(int code = 0, <Throwable> previous = null) -> <PriorityNotSupportedException>
    {
        return new PriorityNotSupportedException(
            "The provider does not support priority feature",
            code,
            previous
        );
    }
}
