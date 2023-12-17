#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SmallBufferPool_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool.GetBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::GlobalNamespace::SmallBufferPool::*)(int32_t)>(&::GlobalNamespace::SmallBufferPool::GetBuffer)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xe56ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(),
                            "GetBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool.ReleaseBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmallBufferPool::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::GlobalNamespace::SmallBufferPool::ReleaseBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe56f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(),
                            "ReleaseBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool.ReleaseBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmallBufferPool::*)(ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>)>(&::GlobalNamespace::SmallBufferPool::ReleaseBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe570e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(),
                            "ReleaseBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool.ReleaseBufferInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmallBufferPool::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::GlobalNamespace::SmallBufferPool::ReleaseBufferInternal)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xe56f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(),
                            "ReleaseBufferInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmallBufferPool._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmallBufferPool::*)()>(&::GlobalNamespace::SmallBufferPool::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xe570fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SmallBufferPool::__set__cacheSmall(::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* GlobalNamespace::SmallBufferPool::__get__cacheSmall()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*> GlobalNamespace::SmallBufferPool::__get__cacheSmall() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x10>(this);
}
constexpr void GlobalNamespace::SmallBufferPool::__set__cacheMedium(::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* GlobalNamespace::SmallBufferPool::__get__cacheMedium()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*> GlobalNamespace::SmallBufferPool::__get__cacheMedium() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x18>(this);
}
constexpr void GlobalNamespace::SmallBufferPool::__set__cacheLarge(::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* GlobalNamespace::SmallBufferPool::__get__cacheLarge()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*> GlobalNamespace::SmallBufferPool::__get__cacheLarge() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x20>(this);
}
constexpr void GlobalNamespace::SmallBufferPool::__set__cacheMax(::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* GlobalNamespace::SmallBufferPool::__get__cacheMax()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*> GlobalNamespace::SmallBufferPool::__get__cacheMax() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*, 0x28>(this);
}
inline void GlobalNamespace::SmallBufferPool::setStaticF_instance(::GlobalNamespace::SmallBufferPool*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SmallBufferPool*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get>(std::forward<::GlobalNamespace::SmallBufferPool*>(value));
}
inline ::GlobalNamespace::SmallBufferPool* GlobalNamespace::SmallBufferPool::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SmallBufferPool*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get>();
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GlobalNamespace::SmallBufferPool::GetBuffer(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(),
                            "GetBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(*this, ___internal_method, length);
}
inline void GlobalNamespace::SmallBufferPool::ReleaseBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(),
                            "ReleaseBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer);
}
inline void GlobalNamespace::SmallBufferPool::ReleaseBuffer(ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(),
                            "ReleaseBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer);
}
inline void GlobalNamespace::SmallBufferPool::ReleaseBufferInternal(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(),
                            "ReleaseBufferInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer);
}
inline ::GlobalNamespace::SmallBufferPool* GlobalNamespace::SmallBufferPool::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SmallBufferPool*>());
}
inline void GlobalNamespace::SmallBufferPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmallBufferPool*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
