#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__AsyncStreamReader_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::AsyncStreamReader.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::AsyncStreamReader::*)()>(&::System::Diagnostics::AsyncStreamReader::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x296e8cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::AsyncStreamReader.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::AsyncStreamReader::*)(bool)>(&::System::Diagnostics::AsyncStreamReader::Dispose)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x296e8dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::AsyncStreamReader.CancelOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::AsyncStreamReader::*)()>(&::System::Diagnostics::AsyncStreamReader::CancelOperation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x296ec4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(),
                            "CancelOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Diagnostics::AsyncStreamReader::__set_stream(::System::IO::Stream*  value)  {
::cordl_internals::setInstanceField<::System::IO::Stream*, 0x10>(this, std::forward<::System::IO::Stream*>(value));
}
constexpr ::System::IO::Stream* System::Diagnostics::AsyncStreamReader::__get_stream()  {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> System::Diagnostics::AsyncStreamReader::__get_stream() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream*, 0x10>(this);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_encoding(::System::Text::Encoding*  value)  {
::cordl_internals::setInstanceField<::System::Text::Encoding*, 0x18>(this, std::forward<::System::Text::Encoding*>(value));
}
constexpr ::System::Text::Encoding* System::Diagnostics::AsyncStreamReader::__get_encoding()  {
return ::cordl_internals::getInstanceField<::System::Text::Encoding*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> System::Diagnostics::AsyncStreamReader::__get_encoding() const {
return ::cordl_internals::getInstanceField<::System::Text::Encoding*, 0x18>(this);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_decoder(::System::Text::Decoder*  value)  {
::cordl_internals::setInstanceField<::System::Text::Decoder*, 0x20>(this, std::forward<::System::Text::Decoder*>(value));
}
constexpr ::System::Text::Decoder* System::Diagnostics::AsyncStreamReader::__get_decoder()  {
return ::cordl_internals::getInstanceField<::System::Text::Decoder*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Decoder*> System::Diagnostics::AsyncStreamReader::__get_decoder() const {
return ::cordl_internals::getInstanceField<::System::Text::Decoder*, 0x20>(this);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_byteBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x28>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::Diagnostics::AsyncStreamReader::__get_byteBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x28>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::Diagnostics::AsyncStreamReader::__get_byteBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x28>(this);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_charBuffer(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x30>(this, std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& System::Diagnostics::AsyncStreamReader::__get_charBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x30>(this);
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& System::Diagnostics::AsyncStreamReader::__get_charBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x30>(this);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_cancelOperation(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& System::Diagnostics::AsyncStreamReader::__get_cancelOperation()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& System::Diagnostics::AsyncStreamReader::__get_cancelOperation() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_eofEvent(::System::Threading::ManualResetEvent*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ManualResetEvent*, 0x40>(this, std::forward<::System::Threading::ManualResetEvent*>(value));
}
constexpr ::System::Threading::ManualResetEvent* System::Diagnostics::AsyncStreamReader::__get_eofEvent()  {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> System::Diagnostics::AsyncStreamReader::__get_eofEvent() const {
return ::cordl_internals::getInstanceField<::System::Threading::ManualResetEvent*, 0x40>(this);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_syncObject(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x48>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Diagnostics::AsyncStreamReader::__get_syncObject()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Diagnostics::AsyncStreamReader::__get_syncObject() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x48>(this);
}
constexpr void System::Diagnostics::AsyncStreamReader::__set_asyncReadResult(::System::IAsyncResult*  value)  {
::cordl_internals::setInstanceField<::System::IAsyncResult*, 0x50>(this, std::forward<::System::IAsyncResult*>(value));
}
constexpr ::System::IAsyncResult* System::Diagnostics::AsyncStreamReader::__get_asyncReadResult()  {
return ::cordl_internals::getInstanceField<::System::IAsyncResult*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IAsyncResult*> System::Diagnostics::AsyncStreamReader::__get_asyncReadResult() const {
return ::cordl_internals::getInstanceField<::System::IAsyncResult*, 0x50>(this);
}
inline void System::Diagnostics::AsyncStreamReader::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Diagnostics::AsyncStreamReader::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
inline void System::Diagnostics::AsyncStreamReader::CancelOperation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::AsyncStreamReader*>::get(),
                            "CancelOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
