#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__ValueTypeFixupInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::ValueTypeFixupInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::ValueTypeFixupInfo::*)(int64_t, ::System::Reflection::FieldInfo*, ::ArrayW<int32_t,::Array<int32_t>*>)>(&::System::Runtime::Serialization::ValueTypeFixupInfo::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x24b5ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ValueTypeFixupInfo.get_ContainerID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Runtime::Serialization::ValueTypeFixupInfo::*)()>(&::System::Runtime::Serialization::ValueTypeFixupInfo::get_ContainerID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b5cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(),
                            "get_ContainerID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ValueTypeFixupInfo.get_ParentField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo* (::System::Runtime::Serialization::ValueTypeFixupInfo::*)()>(&::System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b5cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(),
                            "get_ParentField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::ValueTypeFixupInfo.get_ParentIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t,::Array<int32_t>*> (::System::Runtime::Serialization::ValueTypeFixupInfo::*)()>(&::System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b5d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(),
                            "get_ParentIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::ValueTypeFixupInfo::__set__containerID(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Runtime::Serialization::ValueTypeFixupInfo::__get__containerID()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr int64_t const& System::Runtime::Serialization::ValueTypeFixupInfo::__get__containerID() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr void System::Runtime::Serialization::ValueTypeFixupInfo::__set__parentField(::System::Reflection::FieldInfo*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::FieldInfo*, 0x18>(this, std::forward<::System::Reflection::FieldInfo*>(value));
}
constexpr ::System::Reflection::FieldInfo* System::Runtime::Serialization::ValueTypeFixupInfo::__get__parentField()  {
return ::cordl_internals::getInstanceField<::System::Reflection::FieldInfo*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> System::Runtime::Serialization::ValueTypeFixupInfo::__get__parentField() const {
return ::cordl_internals::getInstanceField<::System::Reflection::FieldInfo*, 0x18>(this);
}
constexpr void System::Runtime::Serialization::ValueTypeFixupInfo::__set__parentIndex(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Runtime::Serialization::ValueTypeFixupInfo::__get__parentIndex()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Runtime::Serialization::ValueTypeFixupInfo::__get__parentIndex() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
inline ::System::Runtime::Serialization::ValueTypeFixupInfo* System::Runtime::Serialization::ValueTypeFixupInfo::New_ctor(int64_t  containerID, ::System::Reflection::FieldInfo*  member, ::ArrayW<int32_t,::Array<int32_t>*>  parentIndex)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::ValueTypeFixupInfo*>(containerID, member, parentIndex));
}
inline void System::Runtime::Serialization::ValueTypeFixupInfo::_ctor(int64_t  containerID, ::System::Reflection::FieldInfo*  member, ::ArrayW<int32_t,::Array<int32_t>*>  parentIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, containerID, member, parentIndex);
}
inline int64_t System::Runtime::Serialization::ValueTypeFixupInfo::get_ContainerID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(),
                            "get_ContainerID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline ::System::Reflection::FieldInfo* System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(),
                            "get_ParentField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*, false>(*this, ___internal_method);
}
inline ::ArrayW<int32_t,::Array<int32_t>*> System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::ValueTypeFixupInfo*>::get(),
                            "get_ParentIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t,::Array<int32_t>*>, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
