#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__CultureTypes_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Globalization/zzzz__TextInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Globalization/zzzz__CultureData_def.hpp"
constexpr void System::Globalization::__CultureInfo__Data::__set_ansi(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::__CultureInfo__Data::__get_ansi()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::__CultureInfo__Data::__get_ansi() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__CultureInfo__Data::__set_ebcdic(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::__CultureInfo__Data::__get_ebcdic()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::__CultureInfo__Data::__get_ebcdic() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__CultureInfo__Data::__set_mac(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::__CultureInfo__Data::__get_mac()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::__CultureInfo__Data::__get_mac() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__CultureInfo__Data::__set_oem(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::__CultureInfo__Data::__get_oem()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::__CultureInfo__Data::__get_oem() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__CultureInfo__Data::__set_right_to_left(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& System::Globalization::__CultureInfo__Data::__get_right_to_left()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& System::Globalization::__CultureInfo__Data::__get_right_to_left() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__CultureInfo__Data::__set_list_sep(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x11>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& System::Globalization::__CultureInfo__Data::__get_list_sep()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x11>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& System::Globalization::__CultureInfo__Data::__get_list_sep() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x11>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "ansi", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ebcdic", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mac", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "oem", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "right_to_left", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "list_sep", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::__CultureInfo__Data::__CultureInfo__Data(int32_t  ansi, int32_t  ebcdic, int32_t  mac, int32_t  oem, bool  right_to_left, uint8_t  list_sep) noexcept : ::bs_hook::ValueTypeWrapper<0x14>() {this->ansi = ansi;
this->ebcdic = ebcdic;
this->mac = mac;
this->oem = oem;
this->right_to_left = right_to_left;
this->list_sep = list_sep;
}
//  Writing Method size for method: ::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2577a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate::*)(::StringW)>(&::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2577ca8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate* System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate*>(object, method));
}
inline void System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate::Invoke(::StringW  language)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, language);
}
//  Writing Method size for method: ::System::Globalization::CultureInfo.get__cultureData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureData* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get__cultureData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2572a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get__cultureData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get__isInherited
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get__isInherited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2572aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get__isInherited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_InvariantCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::get_InvariantCulture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2572aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_InvariantCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_CurrentCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::get_CurrentCulture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2572b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_CurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_CurrentUICulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::get_CurrentUICulture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2572b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_CurrentUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.ConstructCurrentCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::ConstructCurrentCulture)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2572b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "ConstructCurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.ConstructCurrentUICulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::ConstructCurrentUICulture)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2572f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "ConstructCurrentUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_Territory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_Territory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2572f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_Territory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get__name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get__name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2572fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get__name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_LCID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_LCID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2572fac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2572fb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_Calendar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::Calendar* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_Calendar)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2572fbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_Parent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_Parent)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2573298;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_TextInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::TextInfo* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_TextInfo)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x25734ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::Clone)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2573684;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::CultureInfo::*)(::System::Object*)>(&::System::Globalization::CultureInfo::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2573820;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.GetCultures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Globalization::CultureInfo*,::Array<::System::Globalization::CultureInfo*>*> (*)(::System::Globalization::CultureTypes)>(&::System::Globalization::CultureInfo::GetCultures)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x25738cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "GetCultures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureTypes>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.GetTextInfoData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::__CultureInfo__Data (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::GetTextInfoData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2573b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "GetTextInfoData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::GetHashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2573b9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2573ba8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_CompareInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CompareInfo* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_CompareInfo)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2573bb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_IsNeutralCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_IsNeutralCulture)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2573d08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.CheckNeutral
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::CheckNeutral)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2573d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "CheckNeutral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_NumberFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::NumberFormatInfo* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_NumberFormat)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2573d54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.set_NumberFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureInfo::*)(::System::Globalization::NumberFormatInfo*)>(&::System::Globalization::CultureInfo::set_NumberFormat)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2573de4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_DateTimeFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DateTimeFormatInfo* (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_DateTimeFormat)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2573eb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.set_DateTimeFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureInfo::*)(::System::Globalization::DateTimeFormatInfo*)>(&::System::Globalization::CultureInfo::set_DateTimeFormat)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2574014;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_EnglishName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_EnglishName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x25740e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.GetFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Globalization::CultureInfo::*)(::System::Type*)>(&::System::Globalization::CultureInfo::GetFormat)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2574114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.Construct
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::Construct)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2573040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.construct_internal_locale_from_lcid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::CultureInfo::*)(int32_t)>(&::System::Globalization::CultureInfo::construct_internal_locale_from_lcid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2574224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "construct_internal_locale_from_lcid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.construct_internal_locale_from_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::CultureInfo::*)(::StringW)>(&::System::Globalization::CultureInfo::construct_internal_locale_from_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2574228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "construct_internal_locale_from_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_current_locale_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::Globalization::CultureInfo::get_current_locale_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2572d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_current_locale_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.internal_get_cultures
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Globalization::CultureInfo*,::Array<::System::Globalization::CultureInfo*>*> (*)(bool, bool, bool)>(&::System::Globalization::CultureInfo::internal_get_cultures)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2573afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "internal_get_cultures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.ConstructInvariant
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureInfo::*)(bool)>(&::System::Globalization::CultureInfo::ConstructInvariant)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x257422c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "ConstructInvariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.CreateTextInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::TextInfo* (::System::Globalization::CultureInfo::*)(bool)>(&::System::Globalization::CultureInfo::CreateTextInfo)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2573608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "CreateTextInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureInfo::*)(int32_t)>(&::System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25734e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureInfo::*)(int32_t, bool)>(&::System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2574384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureInfo::*)(int32_t, bool, bool)>(&::System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x2574390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureInfo::*)(::StringW)>(&::System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25734d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureInfo::*)(::StringW, bool)>(&::System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25745f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureInfo::*)(::StringW, bool, bool)>(&::System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2574600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2574984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.insert_into_shared_tables
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Globalization::CultureInfo*)>(&::System::Globalization::CultureInfo::insert_into_shared_tables)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x25749a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "insert_into_shared_tables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.GetCultureInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)(int32_t)>(&::System::Globalization::CultureInfo::GetCultureInfo)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2574b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "GetCultureInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.GetCultureInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)(::StringW)>(&::System::Globalization::CultureInfo::GetCultureInfo)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x2574d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "GetCultureInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.CreateCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)(::StringW, bool)>(&::System::Globalization::CultureInfo::CreateCulture)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2574f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "CreateCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.CreateSpecificCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)(::StringW)>(&::System::Globalization::CultureInfo::CreateSpecificCulture)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2572d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "CreateSpecificCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.ConstructLocaleFromName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::CultureInfo::*)(::StringW)>(&::System::Globalization::CultureInfo::ConstructLocaleFromName)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2574830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "ConstructLocaleFromName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.CreateSpecificCultureFromNeutral
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)(::StringW)>(&::System::Globalization::CultureInfo::CreateSpecificCultureFromNeutral)> {
  constexpr static std::size_t size = 0x2754;
  constexpr static std::size_t addrs = 0x2575010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "CreateSpecificCultureFromNeutral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_CalendarType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_CalendarType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2573b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_CalendarType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.CreateCalendar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::Calendar* (*)(int32_t)>(&::System::Globalization::CultureInfo::CreateCalendar)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2573060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "CreateCalendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.CreateNotFoundException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::StringW)>(&::System::Globalization::CultureInfo::CreateNotFoundException)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x25748bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "CreateNotFoundException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_DefaultThreadCurrentCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::get_DefaultThreadCurrentCulture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2577764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_DefaultThreadCurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.set_DefaultThreadCurrentCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Globalization::CultureInfo*)>(&::System::Globalization::CultureInfo::set_DefaultThreadCurrentCulture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x25777c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "set_DefaultThreadCurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_DefaultThreadCurrentUICulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::get_DefaultThreadCurrentUICulture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2577824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_DefaultThreadCurrentUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_SortName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CultureInfo::*)()>(&::System::Globalization::CultureInfo::get_SortName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2577884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_SortName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_UserDefaultUICulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::get_UserDefaultUICulture)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x257788c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_UserDefaultUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.get_UserDefaultCulture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::get_UserDefaultCulture)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25778d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_UserDefaultCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.InitializeUserPreferredCultureInfoInAppX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate*)>(&::System::Globalization::CultureInfo::InitializeUserPreferredCultureInfoInAppX)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2577924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "InitializeUserPreferredCultureInfoInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.SetUserPreferredCultureInfoInAppX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::Globalization::CultureInfo::SetUserPreferredCultureInfoInAppX)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2577934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "SetUserPreferredCultureInfoInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.OnCultureInfoChangedInAppX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::System::Globalization::CultureInfo::OnCultureInfoChangedInAppX)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x25729fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "OnCultureInfoChangedInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.GetCultureInfoForUserPreferredLanguageInAppX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (*)()>(&::System::Globalization::CultureInfo::GetCultureInfoForUserPreferredLanguageInAppX)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2577944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "GetCultureInfoForUserPreferredLanguageInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureInfo.SetCultureInfoForUserPreferredLanguageInAppX
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Globalization::CultureInfo*)>(&::System::Globalization::CultureInfo::SetCultureInfoForUserPreferredLanguageInAppX)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2577af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "SetCultureInfoForUserPreferredLanguageInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ICloneable"
constexpr  System::Globalization::CultureInfo::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IFormatProvider"
constexpr  System::Globalization::CultureInfo::operator ::System::IFormatProvider*() noexcept {
return static_cast<::System::IFormatProvider*>(static_cast<void*>(this));
}
inline void System::Globalization::CultureInfo::setStaticF_invariant_culture_info(::System::Globalization::CultureInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "invariant_culture_info", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::getStaticF_invariant_culture_info()  {
return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "invariant_culture_info", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>();
}
inline void System::Globalization::CultureInfo::setStaticF_shared_table_lock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "shared_table_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Globalization::CultureInfo::getStaticF_shared_table_lock()  {
return ::cordl_internals::getStaticField<::System::Object*, "shared_table_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>();
}
inline void System::Globalization::CultureInfo::setStaticF_default_current_culture(::System::Globalization::CultureInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "default_current_culture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::getStaticF_default_current_culture()  {
return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "default_current_culture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>();
}
constexpr void System::Globalization::CultureInfo::__set_m_isReadOnly(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& System::Globalization::CultureInfo::__get_m_isReadOnly()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& System::Globalization::CultureInfo::__get_m_isReadOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void System::Globalization::CultureInfo::__set_cultureID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::CultureInfo::__get_cultureID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& System::Globalization::CultureInfo::__get_cultureID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void System::Globalization::CultureInfo::__set_parent_lcid(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::CultureInfo::__get_parent_lcid()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Globalization::CultureInfo::__get_parent_lcid() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Globalization::CultureInfo::__set_datetime_index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::CultureInfo::__get_datetime_index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& System::Globalization::CultureInfo::__get_datetime_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void System::Globalization::CultureInfo::__set_number_index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::CultureInfo::__get_number_index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Globalization::CultureInfo::__get_number_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void System::Globalization::CultureInfo::__set_default_calendar_type(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::CultureInfo::__get_default_calendar_type()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& System::Globalization::CultureInfo::__get_default_calendar_type() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void System::Globalization::CultureInfo::__set_m_useUserOverride(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& System::Globalization::CultureInfo::__get_m_useUserOverride()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& System::Globalization::CultureInfo::__get_m_useUserOverride() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void System::Globalization::CultureInfo::__set_numInfo(::System::Globalization::NumberFormatInfo*  value)  {
::cordl_internals::setInstanceField<::System::Globalization::NumberFormatInfo*, 0x30>(this, std::forward<::System::Globalization::NumberFormatInfo*>(value));
}
constexpr ::System::Globalization::NumberFormatInfo* System::Globalization::CultureInfo::__get_numInfo()  {
return ::cordl_internals::getInstanceField<::System::Globalization::NumberFormatInfo*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::NumberFormatInfo*> System::Globalization::CultureInfo::__get_numInfo() const {
return ::cordl_internals::getInstanceField<::System::Globalization::NumberFormatInfo*, 0x30>(this);
}
constexpr void System::Globalization::CultureInfo::__set_dateTimeInfo(::System::Globalization::DateTimeFormatInfo*  value)  {
::cordl_internals::setInstanceField<::System::Globalization::DateTimeFormatInfo*, 0x38>(this, std::forward<::System::Globalization::DateTimeFormatInfo*>(value));
}
constexpr ::System::Globalization::DateTimeFormatInfo* System::Globalization::CultureInfo::__get_dateTimeInfo()  {
return ::cordl_internals::getInstanceField<::System::Globalization::DateTimeFormatInfo*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::DateTimeFormatInfo*> System::Globalization::CultureInfo::__get_dateTimeInfo() const {
return ::cordl_internals::getInstanceField<::System::Globalization::DateTimeFormatInfo*, 0x38>(this);
}
constexpr void System::Globalization::CultureInfo::__set_textInfo(::System::Globalization::TextInfo*  value)  {
::cordl_internals::setInstanceField<::System::Globalization::TextInfo*, 0x40>(this, std::forward<::System::Globalization::TextInfo*>(value));
}
constexpr ::System::Globalization::TextInfo* System::Globalization::CultureInfo::__get_textInfo()  {
return ::cordl_internals::getInstanceField<::System::Globalization::TextInfo*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::TextInfo*> System::Globalization::CultureInfo::__get_textInfo() const {
return ::cordl_internals::getInstanceField<::System::Globalization::TextInfo*, 0x40>(this);
}
constexpr void System::Globalization::CultureInfo::__set_m_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Globalization::CultureInfo::__get_m_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& System::Globalization::CultureInfo::__get_m_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void System::Globalization::CultureInfo::__set_englishname(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Globalization::CultureInfo::__get_englishname()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& System::Globalization::CultureInfo::__get_englishname() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr void System::Globalization::CultureInfo::__set_nativename(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Globalization::CultureInfo::__get_nativename()  {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr ::StringW const& System::Globalization::CultureInfo::__get_nativename() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr void System::Globalization::CultureInfo::__set_iso3lang(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Globalization::CultureInfo::__get_iso3lang()  {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr ::StringW const& System::Globalization::CultureInfo::__get_iso3lang() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr void System::Globalization::CultureInfo::__set_iso2lang(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Globalization::CultureInfo::__get_iso2lang()  {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
constexpr ::StringW const& System::Globalization::CultureInfo::__get_iso2lang() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this);
}
constexpr void System::Globalization::CultureInfo::__set_win3lang(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Globalization::CultureInfo::__get_win3lang()  {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr ::StringW const& System::Globalization::CultureInfo::__get_win3lang() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this);
}
constexpr void System::Globalization::CultureInfo::__set_territory(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x78>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Globalization::CultureInfo::__get_territory()  {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this);
}
constexpr ::StringW const& System::Globalization::CultureInfo::__get_territory() const {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this);
}
constexpr void System::Globalization::CultureInfo::__set_native_calendar_names(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x80>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Globalization::CultureInfo::__get_native_calendar_names()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x80>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Globalization::CultureInfo::__get_native_calendar_names() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x80>(this);
}
constexpr void System::Globalization::CultureInfo::__set_compareInfo(::System::Globalization::CompareInfo*  value)  {
::cordl_internals::setInstanceField<::System::Globalization::CompareInfo*, 0x88>(this, std::forward<::System::Globalization::CompareInfo*>(value));
}
constexpr ::System::Globalization::CompareInfo* System::Globalization::CultureInfo::__get_compareInfo()  {
return ::cordl_internals::getInstanceField<::System::Globalization::CompareInfo*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CompareInfo*> System::Globalization::CultureInfo::__get_compareInfo() const {
return ::cordl_internals::getInstanceField<::System::Globalization::CompareInfo*, 0x88>(this);
}
constexpr void System::Globalization::CultureInfo::__set_textinfo_data(::cordl_internals::Ptr<void>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<void>, 0x90>(this, std::forward<::cordl_internals::Ptr<void>>(value));
}
constexpr ::cordl_internals::Ptr<void>& System::Globalization::CultureInfo::__get_textinfo_data()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<void>, 0x90>(this);
}
constexpr ::cordl_internals::Ptr<void> const& System::Globalization::CultureInfo::__get_textinfo_data() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<void>, 0x90>(this);
}
constexpr void System::Globalization::CultureInfo::__set_m_dataItem(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::CultureInfo::__get_m_dataItem()  {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
constexpr int32_t const& System::Globalization::CultureInfo::__get_m_dataItem() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this);
}
constexpr void System::Globalization::CultureInfo::__set_calendar(::System::Globalization::Calendar*  value)  {
::cordl_internals::setInstanceField<::System::Globalization::Calendar*, 0xa0>(this, std::forward<::System::Globalization::Calendar*>(value));
}
constexpr ::System::Globalization::Calendar* System::Globalization::CultureInfo::__get_calendar()  {
return ::cordl_internals::getInstanceField<::System::Globalization::Calendar*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::Calendar*> System::Globalization::CultureInfo::__get_calendar() const {
return ::cordl_internals::getInstanceField<::System::Globalization::Calendar*, 0xa0>(this);
}
constexpr void System::Globalization::CultureInfo::__set_parent_culture(::System::Globalization::CultureInfo*  value)  {
::cordl_internals::setInstanceField<::System::Globalization::CultureInfo*, 0xa8>(this, std::forward<::System::Globalization::CultureInfo*>(value));
}
constexpr ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::__get_parent_culture()  {
return ::cordl_internals::getInstanceField<::System::Globalization::CultureInfo*, 0xa8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> System::Globalization::CultureInfo::__get_parent_culture() const {
return ::cordl_internals::getInstanceField<::System::Globalization::CultureInfo*, 0xa8>(this);
}
constexpr void System::Globalization::CultureInfo::__set_constructed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xb0>(this, std::forward<bool>(value));
}
constexpr bool& System::Globalization::CultureInfo::__get_constructed()  {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this);
}
constexpr bool const& System::Globalization::CultureInfo::__get_constructed() const {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this);
}
constexpr void System::Globalization::CultureInfo::__set_cached_serialized_form(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb8>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::Globalization::CultureInfo::__get_cached_serialized_form()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb8>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::Globalization::CultureInfo::__get_cached_serialized_form() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xb8>(this);
}
constexpr void System::Globalization::CultureInfo::__set_m_cultureData(::System::Globalization::CultureData*  value)  {
::cordl_internals::setInstanceField<::System::Globalization::CultureData*, 0xc0>(this, std::forward<::System::Globalization::CultureData*>(value));
}
constexpr ::System::Globalization::CultureData* System::Globalization::CultureInfo::__get_m_cultureData()  {
return ::cordl_internals::getInstanceField<::System::Globalization::CultureData*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureData*> System::Globalization::CultureInfo::__get_m_cultureData() const {
return ::cordl_internals::getInstanceField<::System::Globalization::CultureData*, 0xc0>(this);
}
constexpr void System::Globalization::CultureInfo::__set_m_isInherited(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this, std::forward<bool>(value));
}
constexpr bool& System::Globalization::CultureInfo::__get_m_isInherited()  {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this);
}
constexpr bool const& System::Globalization::CultureInfo::__get_m_isInherited() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this);
}
inline void System::Globalization::CultureInfo::setStaticF_s_DefaultThreadCurrentUICulture(::System::Globalization::CultureInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "s_DefaultThreadCurrentUICulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::getStaticF_s_DefaultThreadCurrentUICulture()  {
return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "s_DefaultThreadCurrentUICulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>();
}
inline void System::Globalization::CultureInfo::setStaticF_s_DefaultThreadCurrentCulture(::System::Globalization::CultureInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "s_DefaultThreadCurrentCulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::getStaticF_s_DefaultThreadCurrentCulture()  {
return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "s_DefaultThreadCurrentCulture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>();
}
inline void System::Globalization::CultureInfo::setStaticF_shared_by_number(::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CultureInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CultureInfo*>*, "shared_by_number", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CultureInfo*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CultureInfo*>* System::Globalization::CultureInfo::getStaticF_shared_by_number()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Globalization::CultureInfo*>*, "shared_by_number", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>();
}
inline void System::Globalization::CultureInfo::setStaticF_shared_by_name(::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::CultureInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::CultureInfo*>*, "shared_by_name", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::CultureInfo*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::CultureInfo*>* System::Globalization::CultureInfo::getStaticF_shared_by_name()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Globalization::CultureInfo*>*, "shared_by_name", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>();
}
inline void System::Globalization::CultureInfo::setStaticF_s_UserPreferredCultureInfoInAppX(::System::Globalization::CultureInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "s_UserPreferredCultureInfoInAppX", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::getStaticF_s_UserPreferredCultureInfoInAppX()  {
return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "s_UserPreferredCultureInfoInAppX", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>();
}
inline void System::Globalization::CultureInfo::setStaticF_IsTaiwanSku(bool  value)  {
::cordl_internals::setStaticField<bool, "IsTaiwanSku", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>(std::forward<bool>(value));
}
inline bool System::Globalization::CultureInfo::getStaticF_IsTaiwanSku()  {
return ::cordl_internals::getStaticField<bool, "IsTaiwanSku", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get>();
}
inline ::System::Globalization::CultureData* System::Globalization::CultureInfo::get__cultureData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get__cultureData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureData*, false>(*this, ___internal_method);
}
inline bool System::Globalization::CultureInfo::get__isInherited()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get__isInherited",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_InvariantCulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_InvariantCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_CurrentCulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_CurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_CurrentUICulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_CurrentUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::ConstructCurrentCulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "ConstructCurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::ConstructCurrentUICulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "ConstructCurrentUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method);
}
inline ::StringW System::Globalization::CultureInfo::get_Territory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_Territory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::Globalization::CultureInfo::get__name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get__name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline int32_t System::Globalization::CultureInfo::get_LCID()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_LCID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW System::Globalization::CultureInfo::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Globalization::Calendar* System::Globalization::CultureInfo::get_Calendar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_Calendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*, false>(*this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_Parent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_Parent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(*this, ___internal_method);
}
inline ::System::Globalization::TextInfo* System::Globalization::CultureInfo::get_TextInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_TextInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::TextInfo*, false>(*this, ___internal_method);
}
inline ::System::Object* System::Globalization::CultureInfo::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline bool System::Globalization::CultureInfo::Equals(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline ::ArrayW<::System::Globalization::CultureInfo*,::Array<::System::Globalization::CultureInfo*>*> System::Globalization::CultureInfo::GetCultures(::System::Globalization::CultureTypes  types)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "GetCultures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureTypes>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Globalization::CultureInfo*,::Array<::System::Globalization::CultureInfo*>*>, false>(nullptr, ___internal_method, types);
}
inline ::System::Globalization::__CultureInfo__Data System::Globalization::CultureInfo::GetTextInfoData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "GetTextInfoData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::__CultureInfo__Data, false>(*this, ___internal_method);
}
inline int32_t System::Globalization::CultureInfo::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::StringW System::Globalization::CultureInfo::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Globalization::CompareInfo* System::Globalization::CultureInfo::get_CompareInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_CompareInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CompareInfo*, false>(*this, ___internal_method);
}
inline bool System::Globalization::CultureInfo::get_IsNeutralCulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_IsNeutralCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Globalization::CultureInfo::CheckNeutral()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "CheckNeutral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Globalization::NumberFormatInfo* System::Globalization::CultureInfo::get_NumberFormat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_NumberFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::NumberFormatInfo*, false>(*this, ___internal_method);
}
inline void System::Globalization::CultureInfo::set_NumberFormat(::System::Globalization::NumberFormatInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "set_NumberFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::CultureInfo::get_DateTimeFormat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_DateTimeFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatInfo*, false>(*this, ___internal_method);
}
inline void System::Globalization::CultureInfo::set_DateTimeFormat(::System::Globalization::DateTimeFormatInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "set_DateTimeFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW System::Globalization::CultureInfo::get_EnglishName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_EnglishName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Object* System::Globalization::CultureInfo::GetFormat(::System::Type*  formatType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "GetFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, formatType);
}
inline void System::Globalization::CultureInfo::Construct()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "Construct",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Globalization::CultureInfo::construct_internal_locale_from_lcid(int32_t  lcid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "construct_internal_locale_from_lcid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, lcid);
}
inline bool System::Globalization::CultureInfo::construct_internal_locale_from_name(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "construct_internal_locale_from_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, name);
}
inline ::StringW System::Globalization::CultureInfo::get_current_locale_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_current_locale_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::System::Globalization::CultureInfo*,::Array<::System::Globalization::CultureInfo*>*> System::Globalization::CultureInfo::internal_get_cultures(bool  neutral, bool  specific, bool  installed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "internal_get_cultures",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Globalization::CultureInfo*,::Array<::System::Globalization::CultureInfo*>*>, false>(nullptr, ___internal_method, neutral, specific, installed);
}
inline void System::Globalization::CultureInfo::ConstructInvariant(bool  read_only)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "ConstructInvariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, read_only);
}
inline ::System::Globalization::TextInfo* System::Globalization::CultureInfo::CreateTextInfo(bool  readOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "CreateTextInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::TextInfo*, false>(*this, ___internal_method, readOnly);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::New_ctor(int32_t  culture)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Globalization::CultureInfo*>(culture));
}
inline void System::Globalization::CultureInfo::_ctor(int32_t  culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, culture);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::New_ctor(int32_t  culture, bool  useUserOverride)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Globalization::CultureInfo*>(culture, useUserOverride));
}
inline void System::Globalization::CultureInfo::_ctor(int32_t  culture, bool  useUserOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, culture, useUserOverride);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::New_ctor(int32_t  culture, bool  useUserOverride, bool  read_only)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Globalization::CultureInfo*>(culture, useUserOverride, read_only));
}
inline void System::Globalization::CultureInfo::_ctor(int32_t  culture, bool  useUserOverride, bool  read_only)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, culture, useUserOverride, read_only);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::New_ctor(::StringW  name)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Globalization::CultureInfo*>(name));
}
inline void System::Globalization::CultureInfo::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::New_ctor(::StringW  name, bool  useUserOverride)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Globalization::CultureInfo*>(name, useUserOverride));
}
inline void System::Globalization::CultureInfo::_ctor(::StringW  name, bool  useUserOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, useUserOverride);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::New_ctor(::StringW  name, bool  useUserOverride, bool  read_only)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Globalization::CultureInfo*>(name, useUserOverride, read_only));
}
inline void System::Globalization::CultureInfo::_ctor(::StringW  name, bool  useUserOverride, bool  read_only)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, useUserOverride, read_only);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Globalization::CultureInfo*>());
}
inline void System::Globalization::CultureInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Globalization::CultureInfo::insert_into_shared_tables(::System::Globalization::CultureInfo*  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "insert_into_shared_tables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, c);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::GetCultureInfo(int32_t  culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "GetCultureInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method, culture);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::GetCultureInfo(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "GetCultureInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method, name);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::CreateCulture(::StringW  name, bool  reference)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "CreateCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method, name, reference);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::CreateSpecificCulture(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "CreateSpecificCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method, name);
}
inline bool System::Globalization::CultureInfo::ConstructLocaleFromName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "ConstructLocaleFromName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, name);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::CreateSpecificCultureFromNeutral(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "CreateSpecificCultureFromNeutral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method, name);
}
inline int32_t System::Globalization::CultureInfo::get_CalendarType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_CalendarType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Globalization::Calendar* System::Globalization::CultureInfo::CreateCalendar(int32_t  calendarType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "CreateCalendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*, false>(nullptr, ___internal_method, calendarType);
}
inline ::System::Exception* System::Globalization::CultureInfo::CreateNotFoundException(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "CreateNotFoundException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, name);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_DefaultThreadCurrentCulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_DefaultThreadCurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method);
}
inline void System::Globalization::CultureInfo::set_DefaultThreadCurrentCulture(::System::Globalization::CultureInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "set_DefaultThreadCurrentCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_DefaultThreadCurrentUICulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_DefaultThreadCurrentUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method);
}
inline ::StringW System::Globalization::CultureInfo::get_SortName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_SortName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_UserDefaultUICulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_UserDefaultUICulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::get_UserDefaultCulture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "get_UserDefaultCulture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method);
}
inline void System::Globalization::CultureInfo::InitializeUserPreferredCultureInfoInAppX(::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate*  onCultureInfoChangedInAppX)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "InitializeUserPreferredCultureInfoInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__CultureInfo__OnCultureInfoChangedDelegate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, onCultureInfoChangedInAppX);
}
inline void System::Globalization::CultureInfo::SetUserPreferredCultureInfoInAppX(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "SetUserPreferredCultureInfoInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name);
}
inline void System::Globalization::CultureInfo::OnCultureInfoChangedInAppX(::StringW  language)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "OnCultureInfoChangedInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, language);
}
inline ::System::Globalization::CultureInfo* System::Globalization::CultureInfo::GetCultureInfoForUserPreferredLanguageInAppX()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "GetCultureInfoForUserPreferredLanguageInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(nullptr, ___internal_method);
}
inline void System::Globalization::CultureInfo::SetCultureInfoForUserPreferredLanguageInAppX(::System::Globalization::CultureInfo*  cultureInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CultureInfo*>::get(),
                            "SetCultureInfoForUserPreferredLanguageInAppX",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cultureInfo);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
