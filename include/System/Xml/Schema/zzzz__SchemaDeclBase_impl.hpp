#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
constexpr void System::Xml::Schema::__SchemaDeclBase__Use::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::Schema::__SchemaDeclBase__Use::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::Schema::__SchemaDeclBase__Use::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use::__SchemaDeclBase__Use(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use  System::Xml::Schema::__SchemaDeclBase__Use::Default{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use  System::Xml::Schema::__SchemaDeclBase__Use::Required{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use  System::Xml::Schema::__SchemaDeclBase__Use::Implied{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use  System::Xml::Schema::__SchemaDeclBase__Use::Fixed{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use  System::Xml::Schema::__SchemaDeclBase__Use::RequiredFixed{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::XmlQualifiedName*, ::StringW)>(&::System::Xml::Schema::SchemaDeclBase::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28c435c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x28c43e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c4984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Prefix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Prefix)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28c44a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_Prefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_IsDeclaredInExternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_IsDeclaredInExternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c498c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_IsDeclaredInExternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_IsDeclaredInExternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(bool)>(&::System::Xml::Schema::SchemaDeclBase::set_IsDeclaredInExternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x28c4994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "set_IsDeclaredInExternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Presence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::__SchemaDeclBase__Use (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Presence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c49a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_Presence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_Presence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::__SchemaDeclBase__Use)>(&::System::Xml::Schema::SchemaDeclBase::set_Presence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c49a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "set_Presence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__SchemaDeclBase__Use>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_SchemaType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::XmlSchemaType*)>(&::System::Xml::Schema::SchemaDeclBase::set_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c49b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "set_SchemaType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Datatype
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Datatype)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c49b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_Datatype",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_Datatype
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::SchemaDeclBase::set_Datatype)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c49c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "set_Datatype",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.AddValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::StringW)>(&::System::Xml::Schema::SchemaDeclBase::AddValue)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x28c49c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_Values
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c4ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_DefaultValueRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_DefaultValueRaw)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x28c4ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_DefaultValueRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.get_DefaultValueTyped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::SchemaDeclBase::*)()>(&::System::Xml::Schema::SchemaDeclBase::get_DefaultValueTyped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c4b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_DefaultValueTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaDeclBase.set_DefaultValueTyped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaDeclBase::*)(::System::Object*)>(&::System::Xml::Schema::SchemaDeclBase::set_DefaultValueTyped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c4b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "set_DefaultValueTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::SchemaDeclBase::__set_name(::System::Xml::XmlQualifiedName*  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlQualifiedName*, 0x10>(this, std::forward<::System::Xml::XmlQualifiedName*>(value));
}
constexpr ::System::Xml::XmlQualifiedName* System::Xml::Schema::SchemaDeclBase::__get_name()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlQualifiedName*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> System::Xml::Schema::SchemaDeclBase::__get_name() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlQualifiedName*, 0x10>(this);
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_prefix(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::Schema::SchemaDeclBase::__get_prefix()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::Xml::Schema::SchemaDeclBase::__get_prefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_isDeclaredInExternal(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::Schema::SchemaDeclBase::__get_isDeclaredInExternal()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& System::Xml::Schema::SchemaDeclBase::__get_isDeclaredInExternal() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_presence(::System::Xml::Schema::__SchemaDeclBase__Use  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::__SchemaDeclBase__Use, 0x24>(this, std::forward<::System::Xml::Schema::__SchemaDeclBase__Use>(value));
}
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use& System::Xml::Schema::SchemaDeclBase::__get_presence()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::__SchemaDeclBase__Use, 0x24>(this);
}
constexpr ::System::Xml::Schema::__SchemaDeclBase__Use const& System::Xml::Schema::SchemaDeclBase::__get_presence() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::__SchemaDeclBase__Use, 0x24>(this);
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_schemaType(::System::Xml::Schema::XmlSchemaType*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaType*, 0x28>(this, std::forward<::System::Xml::Schema::XmlSchemaType*>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaType* System::Xml::Schema::SchemaDeclBase::__get_schemaType()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaType*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaType*> System::Xml::Schema::SchemaDeclBase::__get_schemaType() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaType*, 0x28>(this);
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_datatype(::System::Xml::Schema::XmlSchemaDatatype*  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaDatatype*, 0x30>(this, std::forward<::System::Xml::Schema::XmlSchemaDatatype*>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::SchemaDeclBase::__get_datatype()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaDatatype*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaDatatype*> System::Xml::Schema::SchemaDeclBase::__get_datatype() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaDatatype*, 0x30>(this);
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_defaultValueRaw(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::Schema::SchemaDeclBase::__get_defaultValueRaw()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& System::Xml::Schema::SchemaDeclBase::__get_defaultValueRaw() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_defaultValueTyped(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x40>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Xml::Schema::SchemaDeclBase::__get_defaultValueTyped()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Xml::Schema::SchemaDeclBase::__get_defaultValueTyped() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x40>(this);
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_maxLength(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x48>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Xml::Schema::SchemaDeclBase::__get_maxLength()  {
return ::cordl_internals::getInstanceField<int64_t, 0x48>(this);
}
constexpr int64_t const& System::Xml::Schema::SchemaDeclBase::__get_maxLength() const {
return ::cordl_internals::getInstanceField<int64_t, 0x48>(this);
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_minLength(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x50>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Xml::Schema::SchemaDeclBase::__get_minLength()  {
return ::cordl_internals::getInstanceField<int64_t, 0x50>(this);
}
constexpr int64_t const& System::Xml::Schema::SchemaDeclBase::__get_minLength() const {
return ::cordl_internals::getInstanceField<int64_t, 0x50>(this);
}
constexpr void System::Xml::Schema::SchemaDeclBase::__set_values(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x58>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* System::Xml::Schema::SchemaDeclBase::__get_values()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> System::Xml::Schema::SchemaDeclBase::__get_values() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x58>(this);
}
inline ::System::Xml::Schema::SchemaDeclBase* System::Xml::Schema::SchemaDeclBase::New_ctor(::System::Xml::XmlQualifiedName*  name, ::StringW  prefix)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::SchemaDeclBase*>(name, prefix));
}
inline void System::Xml::Schema::SchemaDeclBase::_ctor(::System::Xml::XmlQualifiedName*  name, ::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, prefix);
}
inline ::System::Xml::Schema::SchemaDeclBase* System::Xml::Schema::SchemaDeclBase::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::SchemaDeclBase*>());
}
inline void System::Xml::Schema::SchemaDeclBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::SchemaDeclBase::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*, false>(*this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaDeclBase::get_Prefix()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_Prefix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaDeclBase::get_IsDeclaredInExternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_IsDeclaredInExternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_IsDeclaredInExternal(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "set_IsDeclaredInExternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Xml::Schema::__SchemaDeclBase__Use System::Xml::Schema::SchemaDeclBase::get_Presence()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_Presence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::__SchemaDeclBase__Use, false>(*this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_Presence(::System::Xml::Schema::__SchemaDeclBase__Use  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "set_Presence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::__SchemaDeclBase__Use>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Xml::Schema::SchemaDeclBase::set_SchemaType(::System::Xml::Schema::XmlSchemaType*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "set_SchemaType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::SchemaDeclBase::get_Datatype()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_Datatype",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype*, false>(*this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_Datatype(::System::Xml::Schema::XmlSchemaDatatype*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "set_Datatype",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDatatype*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Xml::Schema::SchemaDeclBase::AddValue(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* System::Xml::Schema::SchemaDeclBase::get_Values()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_Values",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(*this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaDeclBase::get_DefaultValueRaw()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_DefaultValueRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::SchemaDeclBase::get_DefaultValueTyped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "get_DefaultValueTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void System::Xml::Schema::SchemaDeclBase::set_DefaultValueTyped(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaDeclBase*>::get(),
                            "set_DefaultValueTyped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
