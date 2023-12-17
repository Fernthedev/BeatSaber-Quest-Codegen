#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerOctetString_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerOctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerOctetString_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOctetString_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x11bcac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::*)()>(&::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x11bcf2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::*)()>(&::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x11bcf7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::*)()>(&::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x11bd0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__set_octets(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__get_octets()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__get_octets() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr void Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__set_chunkSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__get_chunkSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__get_chunkSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__set_currentChunk(::Org::BouncyCastle::Asn1::DerOctetString*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerOctetString*, 0x20>(this, std::forward<::Org::BouncyCastle::Asn1::DerOctetString*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerOctetString* Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__get_currentChunk()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerOctetString*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerOctetString*> Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__get_currentChunk() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerOctetString*, 0x20>(this);
}
constexpr void Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__set_nextChunkPos(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__get_nextChunkPos()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::__get_nextChunkPos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
inline ::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator* Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  octets, int32_t  chunkSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>(octets, chunkSize));
}
inline void Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  octets, int32_t  chunkSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, octets, chunkSize);
}
inline ::System::Object* Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline bool Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::__BerOctetString__ChunkEnumerator*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.FromSequence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::BerOctetString* (*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(&::Org::BouncyCastle::Asn1::BerOctetString::FromSequence)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x11b7640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            "FromSequence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.ToBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (*)(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>)>(&::Org::BouncyCastle::Asn1::BerOctetString::ToBytes)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x11bc5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            "ToBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.ToOctetStringArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> (*)(::System::Collections::IEnumerable*)>(&::Org::BouncyCastle::Asn1::BerOctetString::ToOctetStringArray)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x11bc68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            "ToOctetStringArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::System::Collections::IEnumerable*)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x11bc878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x11bc8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x11b4e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11bc960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>, int32_t)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x11bc988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>, int32_t)>(&::Org::BouncyCastle::Asn1::BerOctetString::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11bca04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Asn1::BerOctetString::*)()>(&::Org::BouncyCastle::Asn1::BerOctetString::GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x11bca30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.GetObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Asn1::BerOctetString::*)()>(&::Org::BouncyCastle::Asn1::BerOctetString::GetObjects)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x11bcaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            "GetObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerOctetString.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::BerOctetString::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(&::Org::BouncyCastle::Asn1::BerOctetString::Encode)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x11bcafc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Org::BouncyCastle::Asn1::BerOctetString::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
inline void Org::BouncyCastle::Asn1::BerOctetString::setStaticF_DefaultChunkSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DefaultChunkSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Asn1::BerOctetString::getStaticF_DefaultChunkSize()  {
return ::cordl_internals::getStaticField<int32_t, "DefaultChunkSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get>();
}
constexpr void Org::BouncyCastle::Asn1::BerOctetString::__set_chunkSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Asn1::BerOctetString::__get_chunkSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& Org::BouncyCastle::Asn1::BerOctetString::__get_chunkSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void Org::BouncyCastle::Asn1::BerOctetString::__set_octs(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>, 0x20>(this, std::forward<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>(value));
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>& Org::BouncyCastle::Asn1::BerOctetString::__get_octs()  {
return ::cordl_internals::getInstanceField<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>, 0x20>(this);
}
constexpr ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> const& Org::BouncyCastle::Asn1::BerOctetString::__get_octs() const {
return ::cordl_internals::getInstanceField<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>, 0x20>(this);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::FromSequence(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            "FromSequence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::BerOctetString*, false>(nullptr, ___internal_method, seq);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Asn1::BerOctetString::ToBytes(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  octs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            "ToBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(nullptr, ___internal_method, octs);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*> Org::BouncyCastle::Asn1::BerOctetString::ToOctetStringArray(::System::Collections::IEnumerable*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            "ToOctetStringArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>, false>(nullptr, ___internal_method, e);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::System::Collections::IEnumerable*  e)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::BerOctetString*>(e));
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::System::Collections::IEnumerable*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::BerOctetString*>(str));
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, str);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  octs)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::BerOctetString*>(octs));
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  octs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, octs);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str, int32_t  chunkSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::BerOctetString*>(str, chunkSize));
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str, int32_t  chunkSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, str, chunkSize);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  octs, int32_t  chunkSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::BerOctetString*>(octs, chunkSize));
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  octs, int32_t  chunkSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, octs, chunkSize);
}
inline ::Org::BouncyCastle::Asn1::BerOctetString* Org::BouncyCastle::Asn1::BerOctetString::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str, ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  octs, int32_t  chunkSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::BerOctetString*>(str, octs, chunkSize));
}
inline void Org::BouncyCastle::Asn1::BerOctetString::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str, ::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>  octs, int32_t  chunkSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Asn1::Asn1OctetString*,::Array<::Org::BouncyCastle::Asn1::Asn1OctetString*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, str, octs, chunkSize);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Asn1::BerOctetString::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Asn1::BerOctetString::GetObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            "GetObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::BerOctetString::Encode(::Org::BouncyCastle::Asn1::DerOutputStream*  derOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::BerOctetString*>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerOutputStream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, derOut);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
