#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__XStreamingElement_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Xml/Linq/zzzz__XName_def.hpp"
constexpr void System::Xml::Linq::XStreamingElement::__set_name(::System::Xml::Linq::XName*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Linq::XName*, 0x10>(this, std::forward<::System::Xml::Linq::XName*>(value));
}
constexpr ::System::Xml::Linq::XName* System::Xml::Linq::XStreamingElement::__get_name()  {
return ::cordl_internals::getInstanceField<::System::Xml::Linq::XName*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XName*> System::Xml::Linq::XStreamingElement::__get_name() const {
return ::cordl_internals::getInstanceField<::System::Xml::Linq::XName*, 0x10>(this);
}
constexpr void System::Xml::Linq::XStreamingElement::__set_content(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Xml::Linq::XStreamingElement::__get_content()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Xml::Linq::XStreamingElement::__get_content() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
