#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/Internal/zzzz__ReflectionTypeInfo_def.hpp"
#include "Zenject/Internal/zzzz__ReflectionTypeInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "Zenject/zzzz__InjectableInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::*)(::System::Reflection::FieldInfo*, ::Zenject::InjectableInfo*)>(&::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2f23270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::__set_FieldInfo(::System::Reflection::FieldInfo*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::FieldInfo*, 0x10>(this, std::forward<::System::Reflection::FieldInfo*>(value));
}
constexpr ::System::Reflection::FieldInfo* Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::__get_FieldInfo()  {
return ::cordl_internals::getInstanceField<::System::Reflection::FieldInfo*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::__get_FieldInfo() const {
return ::cordl_internals::getInstanceField<::System::Reflection::FieldInfo*, 0x10>(this);
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::__set_InjectableInfo(::Zenject::InjectableInfo*  value)  {
::cordl_internals::setInstanceField<::Zenject::InjectableInfo*, 0x18>(this, std::forward<::Zenject::InjectableInfo*>(value));
}
constexpr ::Zenject::InjectableInfo* Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::__get_InjectableInfo()  {
return ::cordl_internals::getInstanceField<::Zenject::InjectableInfo*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectableInfo*> Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::__get_InjectableInfo() const {
return ::cordl_internals::getInstanceField<::Zenject::InjectableInfo*, 0x18>(this);
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo* Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::New_ctor(::System::Reflection::FieldInfo*  fieldInfo, ::Zenject::InjectableInfo*  injectableInfo)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>(fieldInfo, injectableInfo));
}
inline void Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo::_ctor(::System::Reflection::FieldInfo*  fieldInfo, ::Zenject::InjectableInfo*  injectableInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, fieldInfo, injectableInfo);
}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::*)(::System::Reflection::ParameterInfo*, ::Zenject::InjectableInfo*)>(&::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2f2329c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::__set_ParameterInfo(::System::Reflection::ParameterInfo*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::ParameterInfo*, 0x10>(this, std::forward<::System::Reflection::ParameterInfo*>(value));
}
constexpr ::System::Reflection::ParameterInfo* Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::__get_ParameterInfo()  {
return ::cordl_internals::getInstanceField<::System::Reflection::ParameterInfo*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ParameterInfo*> Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::__get_ParameterInfo() const {
return ::cordl_internals::getInstanceField<::System::Reflection::ParameterInfo*, 0x10>(this);
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::__set_InjectableInfo(::Zenject::InjectableInfo*  value)  {
::cordl_internals::setInstanceField<::Zenject::InjectableInfo*, 0x18>(this, std::forward<::Zenject::InjectableInfo*>(value));
}
constexpr ::Zenject::InjectableInfo* Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::__get_InjectableInfo()  {
return ::cordl_internals::getInstanceField<::Zenject::InjectableInfo*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectableInfo*> Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::__get_InjectableInfo() const {
return ::cordl_internals::getInstanceField<::Zenject::InjectableInfo*, 0x18>(this);
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo* Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::New_ctor(::System::Reflection::ParameterInfo*  parameterInfo, ::Zenject::InjectableInfo*  injectableInfo)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>(parameterInfo, injectableInfo));
}
inline void Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo::_ctor(::System::Reflection::ParameterInfo*  parameterInfo, ::Zenject::InjectableInfo*  injectableInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ParameterInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parameterInfo, injectableInfo);
}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::*)(::System::Reflection::PropertyInfo*, ::Zenject::InjectableInfo*)>(&::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2f232c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::__set_PropertyInfo(::System::Reflection::PropertyInfo*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::PropertyInfo*, 0x10>(this, std::forward<::System::Reflection::PropertyInfo*>(value));
}
constexpr ::System::Reflection::PropertyInfo* Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::__get_PropertyInfo()  {
return ::cordl_internals::getInstanceField<::System::Reflection::PropertyInfo*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::PropertyInfo*> Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::__get_PropertyInfo() const {
return ::cordl_internals::getInstanceField<::System::Reflection::PropertyInfo*, 0x10>(this);
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::__set_InjectableInfo(::Zenject::InjectableInfo*  value)  {
::cordl_internals::setInstanceField<::Zenject::InjectableInfo*, 0x18>(this, std::forward<::Zenject::InjectableInfo*>(value));
}
constexpr ::Zenject::InjectableInfo* Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::__get_InjectableInfo()  {
return ::cordl_internals::getInstanceField<::Zenject::InjectableInfo*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectableInfo*> Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::__get_InjectableInfo() const {
return ::cordl_internals::getInstanceField<::Zenject::InjectableInfo*, 0x18>(this);
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo* Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::New_ctor(::System::Reflection::PropertyInfo*  propertyInfo, ::Zenject::InjectableInfo*  injectableInfo)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>(propertyInfo, injectableInfo));
}
inline void Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo::_ctor(::System::Reflection::PropertyInfo*  propertyInfo, ::Zenject::InjectableInfo*  injectableInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::PropertyInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectableInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, propertyInfo, injectableInfo);
}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::*)(::System::Reflection::MethodInfo*, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*)>(&::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2f232f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::__set_MethodInfo(::System::Reflection::MethodInfo*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::MethodInfo*, 0x10>(this, std::forward<::System::Reflection::MethodInfo*>(value));
}
constexpr ::System::Reflection::MethodInfo* Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::__get_MethodInfo()  {
return ::cordl_internals::getInstanceField<::System::Reflection::MethodInfo*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::__get_MethodInfo() const {
return ::cordl_internals::getInstanceField<::System::Reflection::MethodInfo*, 0x10>(this);
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::__set_Parameters(::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::__get_Parameters()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*> Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::__get_Parameters() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*, 0x18>(this);
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo* Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::New_ctor(::System::Reflection::MethodInfo*  methodInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*  parameters)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>(methodInfo, parameters));
}
inline void Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo::_ctor(::System::Reflection::MethodInfo*  methodInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, methodInfo, parameters);
}
//  Writing Method size for method: ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::*)(::System::Reflection::ConstructorInfo*, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*)>(&::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2f23320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::__set_ConstructorInfo(::System::Reflection::ConstructorInfo*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::ConstructorInfo*, 0x10>(this, std::forward<::System::Reflection::ConstructorInfo*>(value));
}
constexpr ::System::Reflection::ConstructorInfo* Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::__get_ConstructorInfo()  {
return ::cordl_internals::getInstanceField<::System::Reflection::ConstructorInfo*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::__get_ConstructorInfo() const {
return ::cordl_internals::getInstanceField<::System::Reflection::ConstructorInfo*, 0x10>(this);
}
constexpr void Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::__set_Parameters(::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::__get_Parameters()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*> Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::__get_Parameters() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*, 0x18>(this);
}
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo* Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::New_ctor(::System::Reflection::ConstructorInfo*  constructorInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*  parameters)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*>(constructorInfo, parameters));
}
inline void Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo::_ctor(::System::Reflection::ConstructorInfo*  constructorInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, constructorInfo, parameters);
}
//  Writing Method size for method: ::Zenject::Internal::ReflectionTypeInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::Internal::ReflectionTypeInfo::*)(::System::Type*, ::System::Type*, ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*)>(&::Zenject::Internal::ReflectionTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f2321c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::Internal::ReflectionTypeInfo::__set_Type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x10>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* Zenject::Internal::ReflectionTypeInfo::__get_Type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> Zenject::Internal::ReflectionTypeInfo::__get_Type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x10>(this);
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__set_BaseType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x18>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* Zenject::Internal::ReflectionTypeInfo::__get_BaseType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> Zenject::Internal::ReflectionTypeInfo::__get_BaseType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x18>(this);
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__set_InjectProperties(::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>* Zenject::Internal::ReflectionTypeInfo::__get_InjectProperties()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*> Zenject::Internal::ReflectionTypeInfo::__get_InjectProperties() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*, 0x20>(this);
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__set_InjectFields(::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>* Zenject::Internal::ReflectionTypeInfo::__get_InjectFields()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*> Zenject::Internal::ReflectionTypeInfo::__get_InjectFields() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*, 0x28>(this);
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__set_InjectConstructor(::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*  value)  {
::cordl_internals::setInstanceField<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*, 0x30>(this, std::forward<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*>(value));
}
constexpr ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo* Zenject::Internal::ReflectionTypeInfo::__get_InjectConstructor()  {
return ::cordl_internals::getInstanceField<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*> Zenject::Internal::ReflectionTypeInfo::__get_InjectConstructor() const {
return ::cordl_internals::getInstanceField<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*, 0x30>(this);
}
constexpr void Zenject::Internal::ReflectionTypeInfo::__set_InjectMethods(::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*, 0x38>(this, std::forward<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>* Zenject::Internal::ReflectionTypeInfo::__get_InjectMethods()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*> Zenject::Internal::ReflectionTypeInfo::__get_InjectMethods() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*, 0x38>(this);
}
inline ::Zenject::Internal::ReflectionTypeInfo* Zenject::Internal::ReflectionTypeInfo::New_ctor(::System::Type*  type, ::System::Type*  baseType, ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*  injectConstructor, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*  injectMethods, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*  injectFields, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*  injectProperties)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::Internal::ReflectionTypeInfo*>(type, baseType, injectConstructor, injectMethods, injectFields, injectProperties));
}
inline void Zenject::Internal::ReflectionTypeInfo::_ctor(::System::Type*  type, ::System::Type*  baseType, ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*  injectConstructor, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*  injectMethods, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*  injectFields, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*  injectProperties)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::Internal::ReflectionTypeInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, baseType, injectConstructor, injectMethods, injectFields, injectProperties);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
