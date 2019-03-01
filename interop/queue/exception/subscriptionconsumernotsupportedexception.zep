
namespace Interop\Queue\Exception;

use Throwable;

class SubscriptionConsumerNotSupportedException extends Exception
{
    /**
     * @param int $code
     * @param \Throwable $previous
     *
     * @return static
     */
    public static function providerDoestNotSupportIt(int $code = 0, <Throwable> previous = null) -> <SubscriptionConsumerNotSupportedException>
    {
        return new SubscriptionConsumerNotSupportedException(
            "The provider does not support subscription consumer.",
            code,
            previous
        );
    }
}
