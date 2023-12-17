#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__CaptureCollection_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Group_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Capture_def.hpp"
constexpr void System::Text::RegularExpressions::CaptureCollection::__set__group(::System::Text::RegularExpressions::Group*  value)  {
::cordl_internals::setInstanceField<::System::Text::RegularExpressions::Group*, 0x10>(this, std::forward<::System::Text::RegularExpressions::Group*>(value));
}
constexpr ::System::Text::RegularExpressions::Group* System::Text::RegularExpressions::CaptureCollection::__get__group()  {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::Group*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Group*> System::Text::RegularExpressions::CaptureCollection::__get__group() const {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::Group*, 0x10>(this);
}
constexpr void System::Text::RegularExpressions::CaptureCollection::__set__capcount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Text::RegularExpressions::CaptureCollection::__get__capcount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Text::RegularExpressions::CaptureCollection::__get__capcount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Text::RegularExpressions::CaptureCollection::__set__captures(::ArrayW<::System::Text::RegularExpressions::Capture*,::Array<::System::Text::RegularExpressions::Capture*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Text::RegularExpressions::Capture*,::Array<::System::Text::RegularExpressions::Capture*>*>, 0x20>(this, std::forward<::ArrayW<::System::Text::RegularExpressions::Capture*,::Array<::System::Text::RegularExpressions::Capture*>*>>(value));
}
constexpr ::ArrayW<::System::Text::RegularExpressions::Capture*,::Array<::System::Text::RegularExpressions::Capture*>*>& System::Text::RegularExpressions::CaptureCollection::__get__captures()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Text::RegularExpressions::Capture*,::Array<::System::Text::RegularExpressions::Capture*>*>, 0x20>(this);
}
constexpr ::ArrayW<::System::Text::RegularExpressions::Capture*,::Array<::System::Text::RegularExpressions::Capture*>*> const& System::Text::RegularExpressions::CaptureCollection::__get__captures() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Text::RegularExpressions::Capture*,::Array<::System::Text::RegularExpressions::Capture*>*>, 0x20>(this);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
