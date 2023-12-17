#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ArmoredInputStream_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__Crc24_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.Decode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)(int32_t, int32_t, int32_t, int32_t, ::ArrayW<int32_t,::Array<int32_t>*>)>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::Decode)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x11c948c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c9694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)(::System::IO::Stream*, bool)>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x11c969c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.ParseHeaders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::ParseHeaders)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x11c97d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "ParseHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.IsClearText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::IsClearText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c9c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "IsClearText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.IsEndOfStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::IsEndOfStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c9c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "IsEndOfStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.GetArmorHeaderLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::GetArmorHeaderLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c9c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "GetArmorHeaderLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.GetArmorHeaders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::GetArmorHeaders)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x11c9c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "GetArmorHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.ReadIgnoreSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadIgnoreSpace)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11c9e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "ReadIgnoreSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.ReadIgnoreWhitespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadIgnoreWhitespace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x11c9ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "ReadIgnoreWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.ReadByteClearText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadByteClearText)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x11c9f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "ReadByteClearText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.ReadClearText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadClearText)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x11ca008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "ReadClearText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.DoReadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::DoReadByte)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x11ca150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "DoReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.ReadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadByte)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x11ca3e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::Read)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x11ca4cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ArmoredInputStream.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ArmoredInputStream::*)()>(&::Org::BouncyCastle::Bcpg::ArmoredInputStream::Close)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x11ca698;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::ArmoredInputStream::setStaticF_decodingTable(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "decodingTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Org::BouncyCastle::Bcpg::ArmoredInputStream::getStaticF_decodingTable()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "decodingTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get>();
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__set_input(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x30>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_input()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_input() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x30>(this);
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__set_start(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_start()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_start() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__set_outBuf(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x40>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_outBuf()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x40>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_outBuf() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x40>(this);
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__set_bufPtr(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_bufPtr()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_bufPtr() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__set_crc(::Org::BouncyCastle::Bcpg::Crc24*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::Crc24*, 0x50>(this, std::forward<::Org::BouncyCastle::Bcpg::Crc24*>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::Crc24* Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_crc()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::Crc24*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::Crc24*> Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_crc() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::Crc24*, 0x50>(this);
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__set_crcFound(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_crcFound()  {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_crcFound() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__set_hasHeaders(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x59>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_hasHeaders()  {
return ::cordl_internals::getInstanceField<bool, 0x59>(this);
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_hasHeaders() const {
return ::cordl_internals::getInstanceField<bool, 0x59>(this);
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__set_header(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_header()  {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr ::StringW const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_header() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__set_newLineFound(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_newLineFound()  {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_newLineFound() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__set_clearText(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x69>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_clearText()  {
return ::cordl_internals::getInstanceField<bool, 0x69>(this);
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_clearText() const {
return ::cordl_internals::getInstanceField<bool, 0x69>(this);
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__set_restart(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x6a>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_restart()  {
return ::cordl_internals::getInstanceField<bool, 0x6a>(this);
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_restart() const {
return ::cordl_internals::getInstanceField<bool, 0x6a>(this);
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__set_headerList(::System::Collections::IList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::IList*, 0x70>(this, std::forward<::System::Collections::IList*>(value));
}
constexpr ::System::Collections::IList* Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_headerList()  {
return ::cordl_internals::getInstanceField<::System::Collections::IList*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_headerList() const {
return ::cordl_internals::getInstanceField<::System::Collections::IList*, 0x70>(this);
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__set_lastC(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_lastC()  {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_lastC() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr void Org::BouncyCastle::Bcpg::ArmoredInputStream::__set_isEndOfStream(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x7c>(this, std::forward<bool>(value));
}
constexpr bool& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_isEndOfStream()  {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this);
}
constexpr bool const& Org::BouncyCastle::Bcpg::ArmoredInputStream::__get_isEndOfStream() const {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::Decode(int32_t  in0, int32_t  in1, int32_t  in2, int32_t  in3, ::ArrayW<int32_t,::Array<int32_t>*>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, in0, in1, in2, in3, result);
}
inline ::Org::BouncyCastle::Bcpg::ArmoredInputStream* Org::BouncyCastle::Bcpg::ArmoredInputStream::New_ctor(::System::IO::Stream*  input)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(input));
}
inline void Org::BouncyCastle::Bcpg::ArmoredInputStream::_ctor(::System::IO::Stream*  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input);
}
inline ::Org::BouncyCastle::Bcpg::ArmoredInputStream* Org::BouncyCastle::Bcpg::ArmoredInputStream::New_ctor(::System::IO::Stream*  input, bool  hasHeaders)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>(input, hasHeaders));
}
inline void Org::BouncyCastle::Bcpg::ArmoredInputStream::_ctor(::System::IO::Stream*  input, bool  hasHeaders)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input, hasHeaders);
}
inline bool Org::BouncyCastle::Bcpg::ArmoredInputStream::ParseHeaders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "ParseHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::ArmoredInputStream::IsClearText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "IsClearText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::ArmoredInputStream::IsEndOfStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "IsEndOfStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Bcpg::ArmoredInputStream::GetArmorHeaderLine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "GetArmorHeaderLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> Org::BouncyCastle::Bcpg::ArmoredInputStream::GetArmorHeaders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "GetArmorHeaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(*this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadIgnoreSpace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "ReadIgnoreSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadIgnoreWhitespace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "ReadIgnoreWhitespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadByteClearText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "ReadByteClearText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadClearText(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "ReadClearText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, buffer, offset, count);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::DoReadByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "DoReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "ReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::ArmoredInputStream::Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, buffer, offset, count);
}
inline void Org::BouncyCastle::Bcpg::ArmoredInputStream::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ArmoredInputStream*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
