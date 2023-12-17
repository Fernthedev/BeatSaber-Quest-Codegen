#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__Header_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr void System::Runtime::Remoting::Messaging::Header::__set_HeaderNamespace(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Remoting::Messaging::Header::__get_HeaderNamespace()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::Header::__get_HeaderNamespace() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Runtime::Remoting::Messaging::Header::__set_MustUnderstand(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Remoting::Messaging::Header::__get_MustUnderstand()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& System::Runtime::Remoting::Messaging::Header::__get_MustUnderstand() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void System::Runtime::Remoting::Messaging::Header::__set_Name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Remoting::Messaging::Header::__get_Name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& System::Runtime::Remoting::Messaging::Header::__get_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void System::Runtime::Remoting::Messaging::Header::__set_Value(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Remoting::Messaging::Header::__get_Value()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Remoting::Messaging::Header::__get_Value() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
