#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__XObjectChangeAnnotation_def.hpp"
#include "System/Xml/Linq/zzzz__XObjectChangeEventArgs_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
constexpr void System::Xml::Linq::XObjectChangeAnnotation::__set_changing(::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*  value)  {
::cordl_internals::setInstanceField<::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*, 0x10>(this, std::forward<::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*>(value));
}
constexpr ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* System::Xml::Linq::XObjectChangeAnnotation::__get_changing()  {
return ::cordl_internals::getInstanceField<::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*> System::Xml::Linq::XObjectChangeAnnotation::__get_changing() const {
return ::cordl_internals::getInstanceField<::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*, 0x10>(this);
}
constexpr void System::Xml::Linq::XObjectChangeAnnotation::__set_changed(::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*  value)  {
::cordl_internals::setInstanceField<::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*, 0x18>(this, std::forward<::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*>(value));
}
constexpr ::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>* System::Xml::Linq::XObjectChangeAnnotation::__get_changed()  {
return ::cordl_internals::getInstanceField<::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*> System::Xml::Linq::XObjectChangeAnnotation::__get_changed() const {
return ::cordl_internals::getInstanceField<::System::EventHandler_1<::System::Xml::Linq::XObjectChangeEventArgs*>*, 0x18>(this);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
