#pragma once
#include "System/Text/RegularExpressions/zzzz__Capture_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__Group_def.hpp"
#include "System/Text/RegularExpressions/zzzz__CaptureCollection_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::Group._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::Group::*)(::StringW, ::ArrayW<int32_t,::Array<int32_t>*>, int32_t, ::StringW)>(&::System::Text::RegularExpressions::Group::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x294e534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::Group.get_Success
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::RegularExpressions::Group::*)()>(&::System::Text::RegularExpressions::Group::get_Success)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x294e5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::Group._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::RegularExpressions::Group::*)()>(&::System::Text::RegularExpressions::Group::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x294e6dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void System::Text::RegularExpressions::Group::setStaticF_s_emptyGroup(::System::Text::RegularExpressions::Group*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Group*, "s_emptyGroup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get>(std::forward<::System::Text::RegularExpressions::Group*>(value));
}
inline ::System::Text::RegularExpressions::Group* System::Text::RegularExpressions::Group::getStaticF_s_emptyGroup()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Group*, "s_emptyGroup", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get>();
}
constexpr void System::Text::RegularExpressions::Group::__set__caps(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Text::RegularExpressions::Group::__get__caps()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Text::RegularExpressions::Group::__get__caps() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr void System::Text::RegularExpressions::Group::__set__capcount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Text::RegularExpressions::Group::__get__capcount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& System::Text::RegularExpressions::Group::__get__capcount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void System::Text::RegularExpressions::Group::__set__capcoll(::System::Text::RegularExpressions::CaptureCollection*  value)  {
::cordl_internals::setInstanceField<::System::Text::RegularExpressions::CaptureCollection*, 0x30>(this, std::forward<::System::Text::RegularExpressions::CaptureCollection*>(value));
}
constexpr ::System::Text::RegularExpressions::CaptureCollection* System::Text::RegularExpressions::Group::__get__capcoll()  {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::CaptureCollection*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::CaptureCollection*> System::Text::RegularExpressions::Group::__get__capcoll() const {
return ::cordl_internals::getInstanceField<::System::Text::RegularExpressions::CaptureCollection*, 0x30>(this);
}
constexpr void System::Text::RegularExpressions::Group::__set__Name_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Text::RegularExpressions::Group::__get__Name_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& System::Text::RegularExpressions::Group::__get__Name_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
inline ::System::Text::RegularExpressions::Group* System::Text::RegularExpressions::Group::New_ctor(::StringW  text, ::ArrayW<int32_t,::Array<int32_t>*>  caps, int32_t  capcount, ::StringW  name)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Text::RegularExpressions::Group*>(text, caps, capcount, name));
}
inline void System::Text::RegularExpressions::Group::_ctor(::StringW  text, ::ArrayW<int32_t,::Array<int32_t>*>  caps, int32_t  capcount, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, text, caps, capcount, name);
}
inline bool System::Text::RegularExpressions::Group::get_Success()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get(),
                            "get_Success",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Text::RegularExpressions::Group* System::Text::RegularExpressions::Group::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Text::RegularExpressions::Group*>());
}
inline void System::Text::RegularExpressions::Group::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::RegularExpressions::Group*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
