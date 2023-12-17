#pragma once
#include "System/ComponentModel/zzzz__EventDescriptor_impl.hpp"
#include "System/ComponentModel/zzzz__ReflectEventDescriptor_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Type*, ::System::Reflection::EventInfo*)>(&::System::ComponentModel::ReflectEventDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2916c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Collections::IList*)>(&::System::ComponentModel::ReflectEventDescriptor::FillAttributes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2916dac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillEventInfoAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Reflection::EventInfo*, ::System::Collections::IList*)>(&::System::ComponentModel::ReflectEventDescriptor::FillEventInfoAttribute)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2917258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(),
                            "FillEventInfoAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillMethods
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)()>(&::System::ComponentModel::ReflectEventDescriptor::FillMethods)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x2916e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(),
                            "FillMethods",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReflectEventDescriptor.FillSingleMethodAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReflectEventDescriptor::*)(::System::Reflection::MethodInfo*, ::System::Collections::IList*)>(&::System::ComponentModel::ReflectEventDescriptor::FillSingleMethodAttribute)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x2917580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(),
                            "FillSingleMethodAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::ReflectEventDescriptor::__set__type(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x60>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::ComponentModel::ReflectEventDescriptor::__get__type()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::ComponentModel::ReflectEventDescriptor::__get__type() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x60>(this);
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__set__componentClass(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x68>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::ComponentModel::ReflectEventDescriptor::__get__componentClass()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::ComponentModel::ReflectEventDescriptor::__get__componentClass() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x68>(this);
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__set__addMethod(::System::Reflection::MethodInfo*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::MethodInfo*, 0x70>(this, std::forward<::System::Reflection::MethodInfo*>(value));
}
constexpr ::System::Reflection::MethodInfo* System::ComponentModel::ReflectEventDescriptor::__get__addMethod()  {
return ::cordl_internals::getInstanceField<::System::Reflection::MethodInfo*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> System::ComponentModel::ReflectEventDescriptor::__get__addMethod() const {
return ::cordl_internals::getInstanceField<::System::Reflection::MethodInfo*, 0x70>(this);
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__set__removeMethod(::System::Reflection::MethodInfo*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::MethodInfo*, 0x78>(this, std::forward<::System::Reflection::MethodInfo*>(value));
}
constexpr ::System::Reflection::MethodInfo* System::ComponentModel::ReflectEventDescriptor::__get__removeMethod()  {
return ::cordl_internals::getInstanceField<::System::Reflection::MethodInfo*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> System::ComponentModel::ReflectEventDescriptor::__get__removeMethod() const {
return ::cordl_internals::getInstanceField<::System::Reflection::MethodInfo*, 0x78>(this);
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__set__realEvent(::System::Reflection::EventInfo*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::EventInfo*, 0x80>(this, std::forward<::System::Reflection::EventInfo*>(value));
}
constexpr ::System::Reflection::EventInfo* System::ComponentModel::ReflectEventDescriptor::__get__realEvent()  {
return ::cordl_internals::getInstanceField<::System::Reflection::EventInfo*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::EventInfo*> System::ComponentModel::ReflectEventDescriptor::__get__realEvent() const {
return ::cordl_internals::getInstanceField<::System::Reflection::EventInfo*, 0x80>(this);
}
constexpr void System::ComponentModel::ReflectEventDescriptor::__set__filledMethods(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x88>(this, std::forward<bool>(value));
}
constexpr bool& System::ComponentModel::ReflectEventDescriptor::__get__filledMethods()  {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
constexpr bool const& System::ComponentModel::ReflectEventDescriptor::__get__filledMethods() const {
return ::cordl_internals::getInstanceField<bool, 0x88>(this);
}
inline ::System::ComponentModel::ReflectEventDescriptor* System::ComponentModel::ReflectEventDescriptor::New_ctor(::System::Type*  componentClass, ::System::Reflection::EventInfo*  eventInfo)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::ReflectEventDescriptor*>(componentClass, eventInfo));
}
inline void System::ComponentModel::ReflectEventDescriptor::_ctor(::System::Type*  componentClass, ::System::Reflection::EventInfo*  eventInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, componentClass, eventInfo);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillAttributes(::System::Collections::IList*  attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(),
                            "FillAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, attributes);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillEventInfoAttribute(::System::Reflection::EventInfo*  realEventInfo, ::System::Collections::IList*  attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(),
                            "FillEventInfoAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::EventInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, realEventInfo, attributes);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillMethods()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(),
                            "FillMethods",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::ComponentModel::ReflectEventDescriptor::FillSingleMethodAttribute(::System::Reflection::MethodInfo*  realMethodInfo, ::System::Collections::IList*  attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReflectEventDescriptor*>::get(),
                            "FillSingleMethodAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, realMethodInfo, attributes);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
