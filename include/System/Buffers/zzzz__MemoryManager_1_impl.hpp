#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/zzzz__MemoryManager_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/Buffers/zzzz__MemoryHandle_def.hpp"
//  Writing Method size for method: ::System::Buffers::MemoryManager_1<uint8_t>.GetSpan
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Span_1<uint8_t> (::System::Buffers::MemoryManager_1<uint8_t>::*)()>(&::System::Buffers::MemoryManager_1<uint8_t>::GetSpan)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<uint8_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<uint8_t>*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::MemoryManager_1<uint8_t>.Pin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::MemoryHandle (::System::Buffers::MemoryManager_1<uint8_t>::*)(int32_t)>(&::System::Buffers::MemoryManager_1<uint8_t>::Pin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<uint8_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<uint8_t>*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::MemoryManager_1<uint8_t>.TryGetArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Buffers::MemoryManager_1<uint8_t>::*)(ByRef<::System::ArraySegment_1<uint8_t>>)>(&::System::Buffers::MemoryManager_1<uint8_t>::TryGetArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<uint8_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<uint8_t>*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
inline ::System::Span_1<uint8_t> System::Buffers::MemoryManager_1<uint8_t>::GetSpan()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<uint8_t>*>::get(),
                            "GetSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<uint8_t>, false>(*this, ___internal_method);
}
/// @param elementIndex: int32_t (default: static_cast<int32_t>(0x0))
inline ::System::Buffers::MemoryHandle System::Buffers::MemoryManager_1<uint8_t>::Pin(int32_t  elementIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<uint8_t>*>::get(),
                            "Pin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::MemoryHandle, false>(*this, ___internal_method, elementIndex);
}
inline bool System::Buffers::MemoryManager_1<uint8_t>::TryGetArray(ByRef<::System::ArraySegment_1<uint8_t>>  segment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<uint8_t>*>::get(),
                            "TryGetArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ArraySegment_1<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, segment);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Span_1<T> System::Buffers::MemoryManager_1<T>::GetSpan()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<T>*>::get(),
                            "GetSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>, false>(*this, ___internal_method);
}
/// @param elementIndex: int32_t (default: static_cast<int32_t>(0x0))
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Buffers::MemoryHandle System::Buffers::MemoryManager_1<T>::Pin(int32_t  elementIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<T>*>::get(),
                            "Pin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Buffers::MemoryHandle, false>(*this, ___internal_method, elementIndex);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline bool System::Buffers::MemoryManager_1<T>::TryGetArray(ByRef<::System::ArraySegment_1<T>>  segment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::MemoryManager_1<T>*>::get(),
                            "TryGetArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::ArraySegment_1<T>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, segment);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
