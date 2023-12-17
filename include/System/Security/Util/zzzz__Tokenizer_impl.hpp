#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Util/zzzz__Tokenizer_def.hpp"
#include "System/Security/Util/zzzz__TokenizerStream_def.hpp"
#include "System/Security/Util/zzzz__Tokenizer_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
constexpr void System::Security::Util::__Tokenizer__TokenSource::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Util::__Tokenizer__TokenSource::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Security::Util::__Tokenizer__TokenSource::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Security::Util::__Tokenizer__TokenSource::__Tokenizer__TokenSource(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Security::Util::__Tokenizer__TokenSource  System::Security::Util::__Tokenizer__TokenSource::UnicodeByteArray{static_cast<int32_t>(0x0)};
constexpr ::System::Security::Util::__Tokenizer__TokenSource  System::Security::Util::__Tokenizer__TokenSource::UTF8ByteArray{static_cast<int32_t>(0x1)};
constexpr ::System::Security::Util::__Tokenizer__TokenSource  System::Security::Util::__Tokenizer__TokenSource::ASCIIByteArray{static_cast<int32_t>(0x2)};
constexpr ::System::Security::Util::__Tokenizer__TokenSource  System::Security::Util::__Tokenizer__TokenSource::CharArray{static_cast<int32_t>(0x3)};
constexpr ::System::Security::Util::__Tokenizer__TokenSource  System::Security::Util::__Tokenizer__TokenSource::String{static_cast<int32_t>(0x4)};
constexpr ::System::Security::Util::__Tokenizer__TokenSource  System::Security::Util::__Tokenizer__TokenSource::NestedStrings{static_cast<int32_t>(0x5)};
constexpr ::System::Security::Util::__Tokenizer__TokenSource  System::Security::Util::__Tokenizer__TokenSource::Other{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StringMaker.HashString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::StringW)>(&::System::Security::Util::__Tokenizer__StringMaker::HashString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24562c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(),
                            "HashString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StringMaker.HashCharArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t)>(&::System::Security::Util::__Tokenizer__StringMaker::HashCharArray)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2456334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(),
                            "HashCharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StringMaker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::__Tokenizer__StringMaker::*)()>(&::System::Security::Util::__Tokenizer__StringMaker::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2456390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StringMaker.CompareStringAndChars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Util::__Tokenizer__StringMaker::*)(::StringW, ::ArrayW<char16_t,::Array<char16_t>*>, int32_t)>(&::System::Security::Util::__Tokenizer__StringMaker::CompareStringAndChars)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2456424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(),
                            "CompareStringAndChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StringMaker.MakeString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Util::__Tokenizer__StringMaker::*)()>(&::System::Security::Util::__Tokenizer__StringMaker::MakeString)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2450998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(),
                            "MakeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Util::__Tokenizer__StringMaker::__set_aStrings(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Security::Util::__Tokenizer__StringMaker::__get_aStrings()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Security::Util::__Tokenizer__StringMaker::__get_aStrings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this);
}
constexpr void System::Security::Util::__Tokenizer__StringMaker::__set_cStringsMax(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Security::Util::__Tokenizer__StringMaker::__get_cStringsMax()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this);
}
constexpr uint32_t const& System::Security::Util::__Tokenizer__StringMaker::__get_cStringsMax() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this);
}
constexpr void System::Security::Util::__Tokenizer__StringMaker::__set_cStringsUsed(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x1c>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Security::Util::__Tokenizer__StringMaker::__get_cStringsUsed()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this);
}
constexpr uint32_t const& System::Security::Util::__Tokenizer__StringMaker::__get_cStringsUsed() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this);
}
constexpr void System::Security::Util::__Tokenizer__StringMaker::__set__outStringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder*, 0x20>(this, std::forward<::System::Text::StringBuilder*>(value));
}
constexpr ::System::Text::StringBuilder* System::Security::Util::__Tokenizer__StringMaker::__get__outStringBuilder()  {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> System::Security::Util::__Tokenizer__StringMaker::__get__outStringBuilder() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x20>(this);
}
constexpr void System::Security::Util::__Tokenizer__StringMaker::__set__outChars(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x28>(this, std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& System::Security::Util::__Tokenizer__StringMaker::__get__outChars()  {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x28>(this);
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& System::Security::Util::__Tokenizer__StringMaker::__get__outChars() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x28>(this);
}
constexpr void System::Security::Util::__Tokenizer__StringMaker::__set__outIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Util::__Tokenizer__StringMaker::__get__outIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& System::Security::Util::__Tokenizer__StringMaker::__get__outIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
inline uint32_t System::Security::Util::__Tokenizer__StringMaker::HashString(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(),
                            "HashString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, str);
}
inline uint32_t System::Security::Util::__Tokenizer__StringMaker::HashCharArray(::ArrayW<char16_t,::Array<char16_t>*>  a, int32_t  l)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(),
                            "HashCharArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, a, l);
}
inline ::System::Security::Util::__Tokenizer__StringMaker* System::Security::Util::__Tokenizer__StringMaker::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Util::__Tokenizer__StringMaker*>());
}
inline void System::Security::Util::__Tokenizer__StringMaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Security::Util::__Tokenizer__StringMaker::CompareStringAndChars(::StringW  str, ::ArrayW<char16_t,::Array<char16_t>*>  a, int32_t  l)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(),
                            "CompareStringAndChars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t,::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, str, a, l);
}
inline ::StringW System::Security::Util::__Tokenizer__StringMaker::MakeString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StringMaker*>::get(),
                            "MakeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__ITokenReader.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Util::__Tokenizer__ITokenReader::*)()>(&::System::Security::Util::__Tokenizer__ITokenReader::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__ITokenReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__ITokenReader*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
inline int32_t System::Security::Util::__Tokenizer__ITokenReader::Read()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__ITokenReader*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StreamTokenReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::__Tokenizer__StreamTokenReader::*)(::System::IO::StreamReader*)>(&::System::Security::Util::__Tokenizer__StreamTokenReader::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24560ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StreamTokenReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::StreamReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StreamTokenReader.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Util::__Tokenizer__StreamTokenReader::*)()>(&::System::Security::Util::__Tokenizer__StreamTokenReader::Read)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24564b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StreamTokenReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StreamTokenReader*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::__Tokenizer__StreamTokenReader.get_NumCharEncountered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Util::__Tokenizer__StreamTokenReader::*)()>(&::System::Security::Util::__Tokenizer__StreamTokenReader::get_NumCharEncountered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24564f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StreamTokenReader*>::get(),
                            "get_NumCharEncountered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Security::Util::__Tokenizer__ITokenReader"
constexpr  System::Security::Util::__Tokenizer__StreamTokenReader::operator ::System::Security::Util::__Tokenizer__ITokenReader*() noexcept {
return static_cast<::System::Security::Util::__Tokenizer__ITokenReader*>(static_cast<void*>(this));
}
constexpr void System::Security::Util::__Tokenizer__StreamTokenReader::__set__in(::System::IO::StreamReader*  value)  {
::cordl_internals::setInstanceField<::System::IO::StreamReader*, 0x10>(this, std::forward<::System::IO::StreamReader*>(value));
}
constexpr ::System::IO::StreamReader* System::Security::Util::__Tokenizer__StreamTokenReader::__get__in()  {
return ::cordl_internals::getInstanceField<::System::IO::StreamReader*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> System::Security::Util::__Tokenizer__StreamTokenReader::__get__in() const {
return ::cordl_internals::getInstanceField<::System::IO::StreamReader*, 0x10>(this);
}
constexpr void System::Security::Util::__Tokenizer__StreamTokenReader::__set__numCharRead(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Util::__Tokenizer__StreamTokenReader::__get__numCharRead()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Security::Util::__Tokenizer__StreamTokenReader::__get__numCharRead() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
inline ::System::Security::Util::__Tokenizer__StreamTokenReader* System::Security::Util::__Tokenizer__StreamTokenReader::New_ctor(::System::IO::StreamReader*  input)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Util::__Tokenizer__StreamTokenReader*>(input));
}
inline void System::Security::Util::__Tokenizer__StreamTokenReader::_ctor(::System::IO::StreamReader*  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StreamTokenReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::StreamReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input);
}
inline int32_t System::Security::Util::__Tokenizer__StreamTokenReader::Read()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StreamTokenReader*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::Security::Util::__Tokenizer__StreamTokenReader::get_NumCharEncountered()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::__Tokenizer__StreamTokenReader*>::get(),
                            "get_NumCharEncountered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Security::Util::Tokenizer.BasicInitialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::Tokenizer::*)()>(&::System::Security::Util::Tokenizer::BasicInitialization)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2455fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(),
                            "BasicInitialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer.Recycle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::Tokenizer::*)()>(&::System::Security::Util::Tokenizer::Recycle)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2456050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(),
                            "Recycle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::Tokenizer::*)(::StringW)>(&::System::Security::Util::Tokenizer::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2455f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer.ChangeFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::Tokenizer::*)(::System::Text::Encoding*)>(&::System::Security::Util::Tokenizer::ChangeFormat)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x245581c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(),
                            "ChangeFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer.GetTokens
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::Tokenizer::*)(::System::Security::Util::TokenizerStream*, int32_t, bool)>(&::System::Security::Util::Tokenizer::GetTokens)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x2454fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(),
                            "GetTokens",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Util::TokenizerStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Util::Tokenizer.GetStringToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Util::Tokenizer::*)()>(&::System::Security::Util::Tokenizer::GetStringToken)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24561c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(),
                            "GetStringToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Util::Tokenizer::__set_LineNo(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Util::Tokenizer::__get_LineNo()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& System::Security::Util::Tokenizer::__get_LineNo() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__inProcessingTag(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Util::Tokenizer::__get__inProcessingTag()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& System::Security::Util::Tokenizer::__get__inProcessingTag() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__inBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::Security::Util::Tokenizer::__get__inBytes()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::Security::Util::Tokenizer::__get__inBytes() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x18>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__inChars(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x20>(this, std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& System::Security::Util::Tokenizer::__get__inChars()  {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x20>(this);
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& System::Security::Util::Tokenizer::__get__inChars() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x20>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__inString(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Security::Util::Tokenizer::__get__inString()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& System::Security::Util::Tokenizer::__get__inString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__inIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Util::Tokenizer::__get__inIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& System::Security::Util::Tokenizer::__get__inIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__inSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Util::Tokenizer::__get__inSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& System::Security::Util::Tokenizer::__get__inSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__inSavedCharacter(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Util::Tokenizer::__get__inSavedCharacter()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& System::Security::Util::Tokenizer::__get__inSavedCharacter() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__inTokenSource(::System::Security::Util::__Tokenizer__TokenSource  value)  {
::cordl_internals::setInstanceField<::System::Security::Util::__Tokenizer__TokenSource, 0x3c>(this, std::forward<::System::Security::Util::__Tokenizer__TokenSource>(value));
}
constexpr ::System::Security::Util::__Tokenizer__TokenSource& System::Security::Util::Tokenizer::__get__inTokenSource()  {
return ::cordl_internals::getInstanceField<::System::Security::Util::__Tokenizer__TokenSource, 0x3c>(this);
}
constexpr ::System::Security::Util::__Tokenizer__TokenSource const& System::Security::Util::Tokenizer::__get__inTokenSource() const {
return ::cordl_internals::getInstanceField<::System::Security::Util::__Tokenizer__TokenSource, 0x3c>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__inTokenReader(::System::Security::Util::__Tokenizer__ITokenReader*  value)  {
::cordl_internals::setInstanceField<::System::Security::Util::__Tokenizer__ITokenReader*, 0x40>(this, std::forward<::System::Security::Util::__Tokenizer__ITokenReader*>(value));
}
constexpr ::System::Security::Util::__Tokenizer__ITokenReader* System::Security::Util::Tokenizer::__get__inTokenReader()  {
return ::cordl_internals::getInstanceField<::System::Security::Util::__Tokenizer__ITokenReader*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::__Tokenizer__ITokenReader*> System::Security::Util::Tokenizer::__get__inTokenReader() const {
return ::cordl_internals::getInstanceField<::System::Security::Util::__Tokenizer__ITokenReader*, 0x40>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__maker(::System::Security::Util::__Tokenizer__StringMaker*  value)  {
::cordl_internals::setInstanceField<::System::Security::Util::__Tokenizer__StringMaker*, 0x48>(this, std::forward<::System::Security::Util::__Tokenizer__StringMaker*>(value));
}
constexpr ::System::Security::Util::__Tokenizer__StringMaker* System::Security::Util::Tokenizer::__get__maker()  {
return ::cordl_internals::getInstanceField<::System::Security::Util::__Tokenizer__StringMaker*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::__Tokenizer__StringMaker*> System::Security::Util::Tokenizer::__get__maker() const {
return ::cordl_internals::getInstanceField<::System::Security::Util::__Tokenizer__StringMaker*, 0x48>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__searchStrings(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x50>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Security::Util::Tokenizer::__get__searchStrings()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x50>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Security::Util::Tokenizer::__get__searchStrings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x50>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__replaceStrings(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x58>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Security::Util::Tokenizer::__get__replaceStrings()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x58>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Security::Util::Tokenizer::__get__replaceStrings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x58>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__inNestedIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Util::Tokenizer::__get__inNestedIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr int32_t const& System::Security::Util::Tokenizer::__get__inNestedIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__inNestedSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Security::Util::Tokenizer::__get__inNestedSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this);
}
constexpr int32_t const& System::Security::Util::Tokenizer::__get__inNestedSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this);
}
constexpr void System::Security::Util::Tokenizer::__set__inNestedString(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Security::Util::Tokenizer::__get__inNestedString()  {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
constexpr ::StringW const& System::Security::Util::Tokenizer::__get__inNestedString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
inline void System::Security::Util::Tokenizer::BasicInitialization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(),
                            "BasicInitialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Security::Util::Tokenizer::Recycle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(),
                            "Recycle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Security::Util::Tokenizer* System::Security::Util::Tokenizer::New_ctor(::StringW  input)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Util::Tokenizer*>(input));
}
inline void System::Security::Util::Tokenizer::_ctor(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input);
}
inline void System::Security::Util::Tokenizer::ChangeFormat(::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(),
                            "ChangeFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, encoding);
}
inline void System::Security::Util::Tokenizer::GetTokens(::System::Security::Util::TokenizerStream*  stream, int32_t  maxNum, bool  endAfterKet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(),
                            "GetTokens",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Util::TokenizerStream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stream, maxNum, endAfterKet);
}
inline ::StringW System::Security::Util::Tokenizer::GetStringToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::Tokenizer*>::get(),
                            "GetStringToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
