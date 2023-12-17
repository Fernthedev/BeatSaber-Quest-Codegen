#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__GPUBufferAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BestFitAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)(uint32_t)>(&::UnityEngine::UIElements::UIR::GPUBufferAllocator::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2dd52a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator.Allocate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::Alloc (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)(uint32_t, bool)>(&::UnityEngine::UIElements::UIR::GPUBufferAllocator::Allocate)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2dd0cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(),
                            "Allocate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator.Free
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)(::UnityEngine::UIElements::UIR::Alloc)>(&::UnityEngine::UIElements::UIR::GPUBufferAllocator::Free)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2dd0e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(),
                            "Free",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Alloc>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator.get_isEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)()>(&::UnityEngine::UIElements::UIR::GPUBufferAllocator::get_isEmpty)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2dd536c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(),
                            "get_isEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::GPUBufferAllocator.HighLowCollide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::GPUBufferAllocator::*)()>(&::UnityEngine::UIElements::UIR::GPUBufferAllocator::HighLowCollide)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2dd5334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(),
                            "HighLowCollide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::UIR::GPUBufferAllocator::__set_m_Low(::UnityEngine::UIElements::UIR::BestFitAllocator*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::BestFitAllocator*, 0x10>(this, std::forward<::UnityEngine::UIElements::UIR::BestFitAllocator*>(value));
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator* UnityEngine::UIElements::UIR::GPUBufferAllocator::__get_m_Low()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::BestFitAllocator*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BestFitAllocator*> UnityEngine::UIElements::UIR::GPUBufferAllocator::__get_m_Low() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::BestFitAllocator*, 0x10>(this);
}
constexpr void UnityEngine::UIElements::UIR::GPUBufferAllocator::__set_m_High(::UnityEngine::UIElements::UIR::BestFitAllocator*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::UIR::BestFitAllocator*, 0x18>(this, std::forward<::UnityEngine::UIElements::UIR::BestFitAllocator*>(value));
}
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator* UnityEngine::UIElements::UIR::GPUBufferAllocator::__get_m_High()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::BestFitAllocator*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BestFitAllocator*> UnityEngine::UIElements::UIR::GPUBufferAllocator::__get_m_High() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::UIR::BestFitAllocator*, 0x18>(this);
}
inline ::UnityEngine::UIElements::UIR::GPUBufferAllocator* UnityEngine::UIElements::UIR::GPUBufferAllocator::New_ctor(uint32_t  maxSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>(maxSize));
}
inline void UnityEngine::UIElements::UIR::GPUBufferAllocator::_ctor(uint32_t  maxSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, maxSize);
}
inline ::UnityEngine::UIElements::UIR::Alloc UnityEngine::UIElements::UIR::GPUBufferAllocator::Allocate(uint32_t  size, bool  shortLived)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(),
                            "Allocate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Alloc, false>(*this, ___internal_method, size, shortLived);
}
inline void UnityEngine::UIElements::UIR::GPUBufferAllocator::Free(::UnityEngine::UIElements::UIR::Alloc  alloc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(),
                            "Free",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Alloc>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, alloc);
}
inline bool UnityEngine::UIElements::UIR::GPUBufferAllocator::get_isEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(),
                            "get_isEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIR::GPUBufferAllocator::HighLowCollide()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::GPUBufferAllocator*>::get(),
                            "HighLowCollide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
