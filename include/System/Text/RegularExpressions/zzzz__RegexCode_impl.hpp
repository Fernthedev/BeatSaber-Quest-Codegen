#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexCode_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexPrefix_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexBoyerMoore_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::RegexCode::*)(::ArrayW<int32_t,::Array<int32_t>*>, ::System::Collections::Generic::List_1<::StringW>*, int32_t, ::System::Collections::Hashtable*, int32_t, ::System::Text::RegularExpressions::RegexBoyerMoore*, ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>, int32_t, bool)>(&::System::Text::RegularExpressions::RegexCode::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x295ec68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexBoyerMoore*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::RegexCode.OpcodeBacktracks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::System::Text::RegularExpressions::RegexCode::OpcodeBacktracks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x295ed38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCode*>::get(),
                            "OpcodeBacktracks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Text::RegularExpressions::RegexCode::__set_Codes(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Text::RegularExpressions::RegexCode::__get_Codes()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Text::RegularExpressions::RegexCode::__get_Codes() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x10>(this);
}
constexpr void System::Text::RegularExpressions::RegexCode::__set_Strings(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Text::RegularExpressions::RegexCode::__get_Strings()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Text::RegularExpressions::RegexCode::__get_Strings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr void System::Text::RegularExpressions::RegexCode::__set_TrackCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Text::RegularExpressions::RegexCode::__get_TrackCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Text::RegularExpressions::RegexCode::__get_TrackCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void System::Text::RegularExpressions::RegexCode::__set_Caps(::System::Collections::Hashtable*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable*, 0x28>(this, std::forward<::System::Collections::Hashtable*>(value));
}
constexpr ::System::Collections::Hashtable* System::Text::RegularExpressions::RegexCode::__get_Caps()  {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> System::Text::RegularExpressions::RegexCode::__get_Caps() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x28>(this);
}
constexpr void System::Text::RegularExpressions::RegexCode::__set_CapSize(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Text::RegularExpressions::RegexCode::__get_CapSize()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& System::Text::RegularExpressions::RegexCode::__get_CapSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void System::Text::RegularExpressions::RegexCode::__set_FCPrefix(::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>, 0x38>(this, std::forward<::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>>(value));
}
constexpr ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>& System::Text::RegularExpressions::RegexCode::__get_FCPrefix()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>, 0x38>(this);
}
constexpr ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix> const& System::Text::RegularExpressions::RegexCode::__get_FCPrefix() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>, 0x38>(this);
}
constexpr void System::Text::RegularExpressions::RegexCode::__set_BMPrefix(::System::Text::RegularExpressions::RegexBoyerMoore*  value)  {
::cordl_internals::setInstanceField<::System::Text::RegularExpressions::RegexBoyerMoore*, 0x50>(this, std::forward<::System::Text::RegularExpressions::RegexBoyerMoore*>(value));
}
constexpr ::System::Text::RegularExpressions::RegexBoyerMoore* System::Text::RegularExpressions::RegexCode::__get_BMPrefix()  {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::RegexBoyerMoore*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::RegexBoyerMoore*> System::Text::RegularExpressions::RegexCode::__get_BMPrefix() const {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::RegexBoyerMoore*, 0x50>(this);
}
constexpr void System::Text::RegularExpressions::RegexCode::__set_Anchors(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Text::RegularExpressions::RegexCode::__get_Anchors()  {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr int32_t const& System::Text::RegularExpressions::RegexCode::__get_Anchors() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr void System::Text::RegularExpressions::RegexCode::__set_RightToLeft(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x5c>(this, std::forward<bool>(value));
}
constexpr bool& System::Text::RegularExpressions::RegexCode::__get_RightToLeft()  {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this);
}
constexpr bool const& System::Text::RegularExpressions::RegexCode::__get_RightToLeft() const {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this);
}
inline ::System::Text::RegularExpressions::RegexCode* System::Text::RegularExpressions::RegexCode::New_ctor(::ArrayW<int32_t,::Array<int32_t>*>  codes, ::System::Collections::Generic::List_1<::StringW>*  stringlist, int32_t  trackcount, ::System::Collections::Hashtable*  caps, int32_t  capsize, ::System::Text::RegularExpressions::RegexBoyerMoore*  bmPrefix, ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>  fcPrefix, int32_t  anchors, bool  rightToLeft)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Text::RegularExpressions::RegexCode*>(codes, stringlist, trackcount, caps, capsize, bmPrefix, fcPrefix, anchors, rightToLeft));
}
inline void System::Text::RegularExpressions::RegexCode::_ctor(::ArrayW<int32_t,::Array<int32_t>*>  codes, ::System::Collections::Generic::List_1<::StringW>*  stringlist, int32_t  trackcount, ::System::Collections::Hashtable*  caps, int32_t  capsize, ::System::Text::RegularExpressions::RegexBoyerMoore*  bmPrefix, ::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>  fcPrefix, int32_t  anchors, bool  rightToLeft)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::RegularExpressions::RegexBoyerMoore*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::Text::RegularExpressions::RegexPrefix>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, codes, stringlist, trackcount, caps, capsize, bmPrefix, fcPrefix, anchors, rightToLeft);
}
inline bool System::Text::RegularExpressions::RegexCode::OpcodeBacktracks(int32_t  Op)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::RegexCode*>::get(),
                            "OpcodeBacktracks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, Op);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
