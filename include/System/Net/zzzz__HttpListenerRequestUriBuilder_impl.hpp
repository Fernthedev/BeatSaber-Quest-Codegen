#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpListenerRequestUriBuilder_def.hpp"
#include "System/Net/zzzz__HttpListenerRequestUriBuilder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
constexpr void System::Net::__HttpListenerRequestUriBuilder__ParsingResult::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::__HttpListenerRequestUriBuilder__ParsingResult::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::__HttpListenerRequestUriBuilder__ParsingResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__HttpListenerRequestUriBuilder__ParsingResult::__HttpListenerRequestUriBuilder__ParsingResult(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::__HttpListenerRequestUriBuilder__ParsingResult  System::Net::__HttpListenerRequestUriBuilder__ParsingResult::Success{static_cast<int32_t>(0x0)};
constexpr ::System::Net::__HttpListenerRequestUriBuilder__ParsingResult  System::Net::__HttpListenerRequestUriBuilder__ParsingResult::InvalidString{static_cast<int32_t>(0x1)};
constexpr ::System::Net::__HttpListenerRequestUriBuilder__ParsingResult  System::Net::__HttpListenerRequestUriBuilder__ParsingResult::EncodingError{static_cast<int32_t>(0x2)};
constexpr void System::Net::__HttpListenerRequestUriBuilder__EncodingType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::__HttpListenerRequestUriBuilder__EncodingType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Net::__HttpListenerRequestUriBuilder__EncodingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__HttpListenerRequestUriBuilder__EncodingType::__HttpListenerRequestUriBuilder__EncodingType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Net::__HttpListenerRequestUriBuilder__EncodingType  System::Net::__HttpListenerRequestUriBuilder__EncodingType::Primary{static_cast<int32_t>(0x0)};
constexpr ::System::Net::__HttpListenerRequestUriBuilder__EncodingType  System::Net::__HttpListenerRequestUriBuilder__EncodingType::Secondary{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerRequestUriBuilder::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Net::HttpListenerRequestUriBuilder::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x299b934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.GetRequestUri
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Net::HttpListenerRequestUriBuilder::GetRequestUri)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x299ba7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "GetRequestUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.Build
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::HttpListenerRequestUriBuilder::*)()>(&::System::Net::HttpListenerRequestUriBuilder::Build)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x299bb0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.BuildRequestUriUsingCookedPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerRequestUriBuilder::*)()>(&::System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingCookedPath)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x299bbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "BuildRequestUriUsingCookedPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.BuildRequestUriUsingRawPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerRequestUriBuilder::*)()>(&::System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x299be88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "BuildRequestUriUsingRawPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.GetEncoding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoding* (*)(::System::Net::__HttpListenerRequestUriBuilder__EncodingType)>(&::System::Net::HttpListenerRequestUriBuilder::GetEncoding)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x299c384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "GetEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__HttpListenerRequestUriBuilder__EncodingType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.BuildRequestUriUsingRawPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__HttpListenerRequestUriBuilder__ParsingResult (::System::Net::HttpListenerRequestUriBuilder::*)(::System::Text::Encoding*)>(&::System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x299c3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "BuildRequestUriUsingRawPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.ParseRawPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__HttpListenerRequestUriBuilder__ParsingResult (::System::Net::HttpListenerRequestUriBuilder::*)(::System::Text::Encoding*)>(&::System::Net::HttpListenerRequestUriBuilder::ParseRawPath)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x299c640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "ParseRawPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.AppendUnicodeCodePointValuePercentEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerRequestUriBuilder::*)(::StringW)>(&::System::Net::HttpListenerRequestUriBuilder::AppendUnicodeCodePointValuePercentEncoded)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x299cb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "AppendUnicodeCodePointValuePercentEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.AddPercentEncodedOctetToRawOctetsList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerRequestUriBuilder::*)(::System::Text::Encoding*, ::StringW)>(&::System::Net::HttpListenerRequestUriBuilder::AddPercentEncodedOctetToRawOctetsList)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x299ce4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "AddPercentEncodedOctetToRawOctetsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.EmptyDecodeAndAppendRawOctetsList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerRequestUriBuilder::*)(::System::Text::Encoding*)>(&::System::Net::HttpListenerRequestUriBuilder::EmptyDecodeAndAppendRawOctetsList)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x299c790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "EmptyDecodeAndAppendRawOctetsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.AppendOctetsPercentEncoded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IEnumerable_1<uint8_t>*)>(&::System::Net::HttpListenerRequestUriBuilder::AppendOctetsPercentEncoded)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x299cfa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "AppendOctetsPercentEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint8_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.GetOctetsAsString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<uint8_t>*)>(&::System::Net::HttpListenerRequestUriBuilder::GetOctetsAsString)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x299d30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "GetOctetsAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint8_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.GetPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::HttpListenerRequestUriBuilder::GetPath)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x299c214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "GetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.AddSlashToAsteriskOnlyPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::HttpListenerRequestUriBuilder::AddSlashToAsteriskOnlyPath)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x299ba00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "AddSlashToAsteriskOnlyPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.LogWarning
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerRequestUriBuilder::*)(::StringW, ::StringW, ::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::System::Net::HttpListenerRequestUriBuilder::LogWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299c20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
    return ___internal_method;
  }
};
inline void System::Net::HttpListenerRequestUriBuilder::setStaticF_useCookedRequestUrl(bool  value)  {
::cordl_internals::setStaticField<bool, "useCookedRequestUrl", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get>(std::forward<bool>(value));
}
inline bool System::Net::HttpListenerRequestUriBuilder::getStaticF_useCookedRequestUrl()  {
return ::cordl_internals::getStaticField<bool, "useCookedRequestUrl", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get>();
}
inline void System::Net::HttpListenerRequestUriBuilder::setStaticF_utf8Encoding(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "utf8Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Net::HttpListenerRequestUriBuilder::getStaticF_utf8Encoding()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "utf8Encoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get>();
}
inline void System::Net::HttpListenerRequestUriBuilder::setStaticF_ansiEncoding(::System::Text::Encoding*  value)  {
::cordl_internals::setStaticField<::System::Text::Encoding*, "ansiEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Net::HttpListenerRequestUriBuilder::getStaticF_ansiEncoding()  {
return ::cordl_internals::getStaticField<::System::Text::Encoding*, "ansiEncoding", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get>();
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_rawUri(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::HttpListenerRequestUriBuilder::__get_rawUri()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Net::HttpListenerRequestUriBuilder::__get_rawUri() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_cookedUriScheme(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::HttpListenerRequestUriBuilder::__get_cookedUriScheme()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::Net::HttpListenerRequestUriBuilder::__get_cookedUriScheme() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_cookedUriHost(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::HttpListenerRequestUriBuilder::__get_cookedUriHost()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& System::Net::HttpListenerRequestUriBuilder::__get_cookedUriHost() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_cookedUriPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::HttpListenerRequestUriBuilder::__get_cookedUriPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& System::Net::HttpListenerRequestUriBuilder::__get_cookedUriPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_cookedUriQuery(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::HttpListenerRequestUriBuilder::__get_cookedUriQuery()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& System::Net::HttpListenerRequestUriBuilder::__get_cookedUriQuery() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_requestUriString(::System::Text::StringBuilder*  value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder*, 0x38>(this, std::forward<::System::Text::StringBuilder*>(value));
}
constexpr ::System::Text::StringBuilder* System::Net::HttpListenerRequestUriBuilder::__get_requestUriString()  {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> System::Net::HttpListenerRequestUriBuilder::__get_requestUriString() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x38>(this);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_rawOctets(::System::Collections::Generic::List_1<uint8_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<uint8_t>*, 0x40>(this, std::forward<::System::Collections::Generic::List_1<uint8_t>*>(value));
}
constexpr ::System::Collections::Generic::List_1<uint8_t>* System::Net::HttpListenerRequestUriBuilder::__get_rawOctets()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<uint8_t>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint8_t>*> System::Net::HttpListenerRequestUriBuilder::__get_rawOctets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<uint8_t>*, 0x40>(this);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_rawPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::HttpListenerRequestUriBuilder::__get_rawPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& System::Net::HttpListenerRequestUriBuilder::__get_rawPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__set_requestUri(::System::Uri*  value)  {
::cordl_internals::setInstanceField<::System::Uri*, 0x50>(this, std::forward<::System::Uri*>(value));
}
constexpr ::System::Uri* System::Net::HttpListenerRequestUriBuilder::__get_requestUri()  {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> System::Net::HttpListenerRequestUriBuilder::__get_requestUri() const {
return ::cordl_internals::getInstanceField<::System::Uri*, 0x50>(this);
}
inline ::System::Net::HttpListenerRequestUriBuilder* System::Net::HttpListenerRequestUriBuilder::New_ctor(::StringW  rawUri, ::StringW  cookedUriScheme, ::StringW  cookedUriHost, ::StringW  cookedUriPath, ::StringW  cookedUriQuery)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::HttpListenerRequestUriBuilder*>(rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery));
}
inline void System::Net::HttpListenerRequestUriBuilder::_ctor(::StringW  rawUri, ::StringW  cookedUriScheme, ::StringW  cookedUriHost, ::StringW  cookedUriPath, ::StringW  cookedUriQuery)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery);
}
inline ::System::Uri* System::Net::HttpListenerRequestUriBuilder::GetRequestUri(::StringW  rawUri, ::StringW  cookedUriScheme, ::StringW  cookedUriHost, ::StringW  cookedUriPath, ::StringW  cookedUriQuery)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "GetRequestUri",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(nullptr, ___internal_method, rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery);
}
inline ::System::Uri* System::Net::HttpListenerRequestUriBuilder::Build()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "Build",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(*this, ___internal_method);
}
inline void System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingCookedPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "BuildRequestUriUsingCookedPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "BuildRequestUriUsingRawPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Text::Encoding* System::Net::HttpListenerRequestUriBuilder::GetEncoding(::System::Net::__HttpListenerRequestUriBuilder__EncodingType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "GetEncoding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__HttpListenerRequestUriBuilder__EncodingType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*, false>(nullptr, ___internal_method, type);
}
inline ::System::Net::__HttpListenerRequestUriBuilder__ParsingResult System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath(::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "BuildRequestUriUsingRawPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::__HttpListenerRequestUriBuilder__ParsingResult, false>(*this, ___internal_method, encoding);
}
inline ::System::Net::__HttpListenerRequestUriBuilder__ParsingResult System::Net::HttpListenerRequestUriBuilder::ParseRawPath(::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "ParseRawPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::__HttpListenerRequestUriBuilder__ParsingResult, false>(*this, ___internal_method, encoding);
}
inline bool System::Net::HttpListenerRequestUriBuilder::AppendUnicodeCodePointValuePercentEncoded(::StringW  codePoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "AppendUnicodeCodePointValuePercentEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, codePoint);
}
inline bool System::Net::HttpListenerRequestUriBuilder::AddPercentEncodedOctetToRawOctetsList(::System::Text::Encoding*  encoding, ::StringW  escapedCharacter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "AddPercentEncodedOctetToRawOctetsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, encoding, escapedCharacter);
}
inline bool System::Net::HttpListenerRequestUriBuilder::EmptyDecodeAndAppendRawOctetsList(::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "EmptyDecodeAndAppendRawOctetsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, encoding);
}
inline void System::Net::HttpListenerRequestUriBuilder::AppendOctetsPercentEncoded(::System::Text::StringBuilder*  target, ::System::Collections::Generic::IEnumerable_1<uint8_t>*  octets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "AppendOctetsPercentEncoded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint8_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, target, octets);
}
inline ::StringW System::Net::HttpListenerRequestUriBuilder::GetOctetsAsString(::System::Collections::Generic::IEnumerable_1<uint8_t>*  octets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "GetOctetsAsString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<uint8_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, octets);
}
inline ::StringW System::Net::HttpListenerRequestUriBuilder::GetPath(::StringW  uriString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "GetPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, uriString);
}
inline ::StringW System::Net::HttpListenerRequestUriBuilder::AddSlashToAsteriskOnlyPath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "AddSlashToAsteriskOnlyPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline void System::Net::HttpListenerRequestUriBuilder::LogWarning(::StringW  methodName, ::StringW  message, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerRequestUriBuilder*>::get(),
                            "LogWarning",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, methodName, message, args);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
