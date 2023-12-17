#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_EmptyParticle_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
constexpr void System::Xml::Schema::__XmlSchemaParticle__Occurs::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::Schema::__XmlSchemaParticle__Occurs::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::Schema::__XmlSchemaParticle__Occurs::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs::__XmlSchemaParticle__Occurs(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs  System::Xml::Schema::__XmlSchemaParticle__Occurs::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs  System::Xml::Schema::__XmlSchemaParticle__Occurs::Min{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs  System::Xml::Schema::__XmlSchemaParticle__Occurs::Max{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaParticle.set_MinOccurs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaParticle::*)(::System::Decimal)>(&::System::Xml::Schema::XmlSchemaParticle::set_MinOccurs)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x28c78d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                            "set_MinOccurs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaParticle.set_MaxOccurs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaParticle::*)(::System::Decimal)>(&::System::Xml::Schema::XmlSchemaParticle::set_MaxOccurs)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x28c79fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                            "set_MaxOccurs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaParticle._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaParticle::*)()>(&::System::Xml::Schema::XmlSchemaParticle::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28c71c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::XmlSchemaParticle::__set_minOccurs(::System::Decimal  value)  {
::cordl_internals::setInstanceField<::System::Decimal, 0x10>(this, std::forward<::System::Decimal>(value));
}
constexpr ::System::Decimal& System::Xml::Schema::XmlSchemaParticle::__get_minOccurs()  {
return ::cordl_internals::getInstanceField<::System::Decimal, 0x10>(this);
}
constexpr ::System::Decimal const& System::Xml::Schema::XmlSchemaParticle::__get_minOccurs() const {
return ::cordl_internals::getInstanceField<::System::Decimal, 0x10>(this);
}
constexpr void System::Xml::Schema::XmlSchemaParticle::__set_maxOccurs(::System::Decimal  value)  {
::cordl_internals::setInstanceField<::System::Decimal, 0x20>(this, std::forward<::System::Decimal>(value));
}
constexpr ::System::Decimal& System::Xml::Schema::XmlSchemaParticle::__get_maxOccurs()  {
return ::cordl_internals::getInstanceField<::System::Decimal, 0x20>(this);
}
constexpr ::System::Decimal const& System::Xml::Schema::XmlSchemaParticle::__get_maxOccurs() const {
return ::cordl_internals::getInstanceField<::System::Decimal, 0x20>(this);
}
constexpr void System::Xml::Schema::XmlSchemaParticle::__set_flags(::System::Xml::Schema::__XmlSchemaParticle__Occurs  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::__XmlSchemaParticle__Occurs, 0x30>(this, std::forward<::System::Xml::Schema::__XmlSchemaParticle__Occurs>(value));
}
constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs& System::Xml::Schema::XmlSchemaParticle::__get_flags()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::__XmlSchemaParticle__Occurs, 0x30>(this);
}
constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs const& System::Xml::Schema::XmlSchemaParticle::__get_flags() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::__XmlSchemaParticle__Occurs, 0x30>(this);
}
inline void System::Xml::Schema::XmlSchemaParticle::setStaticF_Empty(::System::Xml::Schema::XmlSchemaParticle*  value)  {
::cordl_internals::setStaticField<::System::Xml::Schema::XmlSchemaParticle*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get>(std::forward<::System::Xml::Schema::XmlSchemaParticle*>(value));
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::XmlSchemaParticle::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlSchemaParticle*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get>();
}
inline void System::Xml::Schema::XmlSchemaParticle::set_MinOccurs(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                            "set_MinOccurs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaParticle::set_MaxOccurs(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                            "set_MaxOccurs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::XmlSchemaParticle::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::XmlSchemaParticle*>());
}
inline void System::Xml::Schema::XmlSchemaParticle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
