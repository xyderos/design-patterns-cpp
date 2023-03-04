#include "context.h"

context::context(std::unique_ptr<strategy> &&strategy)
    : strategy_(std::move(strategy))
{
}

void
context::set_strategy(std::unique_ptr<strategy> &&strategy)
{
	strategy_ = std::move(strategy);
}
auto
context::business_logic() const -> std::string
{
	return strategy_ ? strategy_->calculate("guinga guinga") : ":(";
}
