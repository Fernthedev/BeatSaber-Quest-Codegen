#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BloomFilterUtil_def.hpp"
#include "GlobalNamespace/zzzz__BloomFilterUtil_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__BitMask128_def.hpp"
#include "GlobalNamespace/zzzz__BitMask256_def.hpp"
/// @param hashCount: int32_t (default: static_cast<int32_t>(0x3))
/// @param hashBits: int32_t (default: static_cast<int32_t>(0x8))
template<typename T>
inline T GlobalNamespace::BloomFilterUtil::ToBloomFilter(::StringW  value, int32_t  hashCount, int32_t  hashBits)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFilterUtil*>::get(),
                        "ToBloomFilter",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, value, hashCount, hashBits);
}
/// @param hashCount: int32_t (default: static_cast<int32_t>(0x3))
/// @param hashBits: int32_t (default: static_cast<int32_t>(0x8))
template<typename T>
inline T GlobalNamespace::BloomFilterUtil::ToBloomFilter(::System::Collections::Generic::IEnumerable_1<::StringW>*  strings, int32_t  hashCount, int32_t  hashBits)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFilterUtil*>::get(),
                        "ToBloomFilter",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, strings, hashCount, hashBits);
}
/// @param hashCount: int32_t (default: static_cast<int32_t>(0x3))
/// @param hashBits: int32_t (default: static_cast<int32_t>(0x8))
template<typename T>
inline T GlobalNamespace::BloomFilterUtil::ToBloomFilter(::System::Collections::Generic::IEnumerable_1<uint32_t>*  hashes, int32_t  hashCount, int32_t  hashBits)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFilterUtil*>::get(),
                        "ToBloomFilter",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, hashes, hashCount, hashBits);
}
/// @param hashCount: int32_t (default: static_cast<int32_t>(0x3))
/// @param hashBits: int32_t (default: static_cast<int32_t>(0x8))
template<typename T>
inline T GlobalNamespace::BloomFilterUtil::AddBloomFilterEntry(T  bitMask, ::StringW  value, int32_t  hashCount, int32_t  hashBits)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFilterUtil*>::get(),
                        "AddBloomFilterEntry",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, bitMask, value, hashCount, hashBits);
}
/// @param hashCount: int32_t (default: static_cast<int32_t>(0x3))
/// @param hashBits: int32_t (default: static_cast<int32_t>(0x8))
template<typename T>
inline T GlobalNamespace::BloomFilterUtil::AddBloomFilterEntryHash(T  bitMask, uint32_t  hash, int32_t  hashCount, int32_t  hashBits)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFilterUtil*>::get(),
                        "AddBloomFilterEntryHash",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, bitMask, hash, hashCount, hashBits);
}
/// @param hashCount: int32_t (default: static_cast<int32_t>(0x3))
/// @param hashBits: int32_t (default: static_cast<int32_t>(0x8))
template<typename T>
inline bool GlobalNamespace::BloomFilterUtil::ContainsBloomFilterEntry(T  bitMask, ::StringW  value, int32_t  hashCount, int32_t  hashBits)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFilterUtil*>::get(),
                        "ContainsBloomFilterEntry",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bitMask, value, hashCount, hashBits);
}
/// @param hashCount: int32_t (default: static_cast<int32_t>(0x3))
/// @param hashBits: int32_t (default: static_cast<int32_t>(0x8))
template<typename T>
inline bool GlobalNamespace::BloomFilterUtil::ContainsBloomFilterEntryHash(T  bitMask, uint32_t  hash, int32_t  hashCount, int32_t  hashBits)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFilterUtil*>::get(),
                        "ContainsBloomFilterEntryHash",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bitMask, hash, hashCount, hashBits);
}
//  Writing Method size for method: ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>::*)()>(&::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>._ToBloomFilter_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BitMask256 (::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>::*)(::GlobalNamespace::BitMask256, ::StringW)>(&::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>::_ToBloomFilter_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>*>::get(),
                            "<ToBloomFilter>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BitMask256>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>::__set_hashCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>::__get_hashCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>::__get_hashCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>::__set_hashBits(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>::__get_hashBits()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>::__get_hashBits() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
inline ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>* GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>*>());
}
inline void GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BitMask256 GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>::_ToBloomFilter_b__0(::GlobalNamespace::BitMask256  bloomFilter, ::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask256>*>::get(),
                            "<ToBloomFilter>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BitMask256>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask256, false>(*this, ___internal_method, bloomFilter, str);
}
//  Writing Method size for method: ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>::*)()>(&::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>._ToBloomFilter_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BitMask128 (::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>::*)(::GlobalNamespace::BitMask128, ::StringW)>(&::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>::_ToBloomFilter_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>*>::get(),
                            "<ToBloomFilter>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BitMask128>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>::__set_hashCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>::__get_hashCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>::__get_hashCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>::__set_hashBits(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>::__get_hashBits()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>::__get_hashBits() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
inline ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>* GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>*>());
}
inline void GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BitMask128 GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>::_ToBloomFilter_b__0(::GlobalNamespace::BitMask128  bloomFilter, ::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<::GlobalNamespace::BitMask128>*>::get(),
                            "<ToBloomFilter>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BitMask128>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask128, false>(*this, ___internal_method, bloomFilter, str);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>::__set_hashCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>::__get_hashCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>::__get_hashCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>::__set_hashBits(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>::__get_hashBits()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>::__get_hashBits() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>* GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>::_ToBloomFilter_b__0(T  bloomFilter, ::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass1_0_1<T>*>::get(),
                            "<ToBloomFilter>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, bloomFilter, str);
}
//  Writing Method size for method: ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>::*)()>(&::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>._ToBloomFilter_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BitMask128 (::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>::*)(::GlobalNamespace::BitMask128, uint32_t)>(&::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>::_ToBloomFilter_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>*>::get(),
                            "<ToBloomFilter>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BitMask128>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>::__set_hashCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>::__get_hashCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>::__get_hashCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>::__set_hashBits(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>::__get_hashBits()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>::__get_hashBits() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
inline ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>* GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>*>());
}
inline void GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BitMask128 GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>::_ToBloomFilter_b__0(::GlobalNamespace::BitMask128  bloomFilter, uint32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<::GlobalNamespace::BitMask128>*>::get(),
                            "<ToBloomFilter>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BitMask128>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitMask128, false>(*this, ___internal_method, bloomFilter, hash);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>::__set_hashCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>::__get_hashCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>::__get_hashCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>::__set_hashBits(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t& GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>::__get_hashBits()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr int32_t const& GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>::__get_hashBits() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>* GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>*>());
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline T GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>::_ToBloomFilter_b__0(T  bloomFilter, uint32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BloomFilterUtil____c__DisplayClass2_0_1<T>*>::get(),
                            "<ToBloomFilter>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(*this, ___internal_method, bloomFilter, hash);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
