#pragma once
#include "System/Xml/zzzz__IncrementalReadDecoder_impl.hpp"
#include "System/Xml/zzzz__BinHexDecoder_def.hpp"
//  Writing Method size for method: ::System::Xml::BinHexDecoder.get_IsFull
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::BinHexDecoder::*)()>(&::System::Xml::BinHexDecoder::get_IsFull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x284dc04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexDecoder.Decode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::BinHexDecoder::*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t)>(&::System::Xml::BinHexDecoder::Decode)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x284dc14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexDecoder.Decode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (*)(::ArrayW<char16_t,::Array<char16_t>*>, bool)>(&::System::Xml::BinHexDecoder::Decode)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x284df38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::BinHexDecoder.Decode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<char16_t>, ::cordl_internals::Ptr<char16_t>, ::cordl_internals::Ptr<uint8_t>, ::cordl_internals::Ptr<uint8_t>, ByRef<bool>, ByRef<uint8_t>, ByRef<int32_t>, ByRef<int32_t>)>(&::System::Xml::BinHexDecoder::Decode)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x284dd6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::BinHexDecoder::__set_buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::Xml::BinHexDecoder::__get_buffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::Xml::BinHexDecoder::__get_buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr void System::Xml::BinHexDecoder::__set_curIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::BinHexDecoder::__get_curIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Xml::BinHexDecoder::__get_curIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Xml::BinHexDecoder::__set_endIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::BinHexDecoder::__get_endIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& System::Xml::BinHexDecoder::__get_endIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void System::Xml::BinHexDecoder::__set_hasHalfByteCached(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& System::Xml::BinHexDecoder::__get_hasHalfByteCached()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& System::Xml::BinHexDecoder::__get_hasHalfByteCached() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void System::Xml::BinHexDecoder::__set_cachedHalfByte(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x21>(this, std::forward<uint8_t>(value));
}
constexpr uint8_t& System::Xml::BinHexDecoder::__get_cachedHalfByte()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x21>(this);
}
constexpr uint8_t const& System::Xml::BinHexDecoder::__get_cachedHalfByte() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x21>(this);
}
inline bool System::Xml::BinHexDecoder::get_IsFull()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(),
                            "get_IsFull",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t System::Xml::BinHexDecoder::Decode(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  startPos, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, chars, startPos, len);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::Xml::BinHexDecoder::Decode(::ArrayW<char16_t,::Array<char16_t>*>  chars, bool  allowOddChars)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(nullptr, ___internal_method, chars, allowOddChars);
}
inline void System::Xml::BinHexDecoder::Decode(::cordl_internals::Ptr<char16_t>  pChars, ::cordl_internals::Ptr<char16_t>  pCharsEndPos, ::cordl_internals::Ptr<uint8_t>  pBytes, ::cordl_internals::Ptr<uint8_t>  pBytesEndPos, ByRef<bool>  hasHalfByteCached, ByRef<uint8_t>  cachedHalfByte, ByRef<int32_t>  charsDecoded, ByRef<int32_t>  bytesDecoded)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::BinHexDecoder*>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pChars, pCharsEndPos, pBytes, pBytesEndPos, hasHalfByteCached, cachedHalfByte, charsDecoded, bytesDecoded);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
