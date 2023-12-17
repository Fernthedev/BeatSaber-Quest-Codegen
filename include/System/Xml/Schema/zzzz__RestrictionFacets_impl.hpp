#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFacets_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaWhiteSpace_def.hpp"
#include "System/Xml/Schema/zzzz__RestrictionFlags_def.hpp"
constexpr void System::Xml::Schema::RestrictionFacets::__set_Length(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::Schema::RestrictionFacets::__get_Length()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& System::Xml::Schema::RestrictionFacets::__get_Length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_MinLength(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::Schema::RestrictionFacets::__get_MinLength()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& System::Xml::Schema::RestrictionFacets::__get_MinLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_MaxLength(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::Schema::RestrictionFacets::__get_MaxLength()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Xml::Schema::RestrictionFacets::__get_MaxLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_Patterns(::System::Collections::ArrayList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList*, 0x20>(this, std::forward<::System::Collections::ArrayList*>(value));
}
constexpr ::System::Collections::ArrayList* System::Xml::Schema::RestrictionFacets::__get_Patterns()  {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> System::Xml::Schema::RestrictionFacets::__get_Patterns() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x20>(this);
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_Enumeration(::System::Collections::ArrayList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList*, 0x28>(this, std::forward<::System::Collections::ArrayList*>(value));
}
constexpr ::System::Collections::ArrayList* System::Xml::Schema::RestrictionFacets::__get_Enumeration()  {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> System::Xml::Schema::RestrictionFacets::__get_Enumeration() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x28>(this);
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_WhiteSpace(::System::Xml::Schema::XmlSchemaWhiteSpace  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaWhiteSpace, 0x30>(this, std::forward<::System::Xml::Schema::XmlSchemaWhiteSpace>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaWhiteSpace& System::Xml::Schema::RestrictionFacets::__get_WhiteSpace()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaWhiteSpace, 0x30>(this);
}
constexpr ::System::Xml::Schema::XmlSchemaWhiteSpace const& System::Xml::Schema::RestrictionFacets::__get_WhiteSpace() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaWhiteSpace, 0x30>(this);
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_MaxInclusive(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x38>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Xml::Schema::RestrictionFacets::__get_MaxInclusive()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Xml::Schema::RestrictionFacets::__get_MaxInclusive() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x38>(this);
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_MaxExclusive(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x40>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Xml::Schema::RestrictionFacets::__get_MaxExclusive()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Xml::Schema::RestrictionFacets::__get_MaxExclusive() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x40>(this);
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_MinInclusive(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x48>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Xml::Schema::RestrictionFacets::__get_MinInclusive()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Xml::Schema::RestrictionFacets::__get_MinInclusive() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x48>(this);
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_MinExclusive(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x50>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Xml::Schema::RestrictionFacets::__get_MinExclusive()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Xml::Schema::RestrictionFacets::__get_MinExclusive() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x50>(this);
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_TotalDigits(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::Schema::RestrictionFacets::__get_TotalDigits()  {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr int32_t const& System::Xml::Schema::RestrictionFacets::__get_TotalDigits() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_FractionDigits(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::Schema::RestrictionFacets::__get_FractionDigits()  {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr int32_t const& System::Xml::Schema::RestrictionFacets::__get_FractionDigits() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr void System::Xml::Schema::RestrictionFacets::__set_Flags(::System::Xml::Schema::RestrictionFlags  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::RestrictionFlags, 0x60>(this, std::forward<::System::Xml::Schema::RestrictionFlags>(value));
}
constexpr ::System::Xml::Schema::RestrictionFlags& System::Xml::Schema::RestrictionFacets::__get_Flags()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::RestrictionFlags, 0x60>(this);
}
constexpr ::System::Xml::Schema::RestrictionFlags const& System::Xml::Schema::RestrictionFacets::__get_Flags() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::RestrictionFlags, 0x60>(this);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
