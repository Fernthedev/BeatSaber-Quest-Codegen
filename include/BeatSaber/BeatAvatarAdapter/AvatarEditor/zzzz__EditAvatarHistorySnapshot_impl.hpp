#pragma once
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__EditAvatarHistorySnapshot_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarData_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::*)(::BeatSaber::BeatAvatarSDK::AvatarData*, ::BeatSaber::BeatAvatarSDK::AvatarPart)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe14ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarPart>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::__set_avatarEditPart(::BeatSaber::BeatAvatarSDK::AvatarPart  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarSDK::AvatarPart, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BeatSaber::BeatAvatarSDK::AvatarPart>(value));
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::__get_avatarEditPart()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarSDK::AvatarPart, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::__get_avatarEditPart() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarSDK::AvatarPart, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::__set_avatarData(::BeatSaber::BeatAvatarSDK::AvatarData*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarSDK::AvatarData*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::BeatSaber::BeatAvatarSDK::AvatarData*>(value));
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarData* BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::__get_avatarData()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarSDK::AvatarData*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarData*> BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::__get_avatarData() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarSDK::AvatarData*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::_ctor(::BeatSaber::BeatAvatarSDK::AvatarData*  avatarData, ::BeatSaber::BeatAvatarSDK::AvatarPart  avatarEditPart)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::BeatAvatarSDK::AvatarPart>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, avatarData, avatarEditPart);
}
// Ctor Parameters [CppParam { name: "avatarEditPart", ty: "::BeatSaber::BeatAvatarSDK::AvatarPart", modifiers: "", def_value: Some("{}") }, CppParam { name: "avatarData", ty: "::BeatSaber::BeatAvatarSDK::AvatarData*", modifiers: "", def_value: Some("csnull") }]
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarHistorySnapshot::EditAvatarHistorySnapshot(::BeatSaber::BeatAvatarSDK::AvatarPart  avatarEditPart, ::BeatSaber::BeatAvatarSDK::AvatarData*  avatarData) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->avatarEditPart = avatarEditPart;
this->avatarData = avatarData;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
