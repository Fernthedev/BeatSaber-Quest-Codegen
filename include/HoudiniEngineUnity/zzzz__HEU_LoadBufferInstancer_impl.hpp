#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferInstancer_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_LoadBufferInstancer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_LoadBufferInstancer::*)()>(&::HoudiniEngineUnity::HEU_LoadBufferInstancer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21abd98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__instanceTransforms(::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>, 0x30>(this, std::forward<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>(value));
}
constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instanceTransforms()  {
return ::cordl_internals::getInstanceField<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>, 0x30>(this);
}
constexpr ::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*> const& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instanceTransforms() const {
return ::cordl_internals::getInstanceField<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__instancePrefixes(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x38>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instancePrefixes()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x38>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instancePrefixes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__instanceNodeIDs(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x40>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instanceNodeIDs()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x40>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__instanceNodeIDs() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__assetPaths(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x48>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__assetPaths()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x48>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__assetPaths() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x48>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferInstancer::__set__collisionAssetPaths(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x50>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__collisionAssetPaths()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x50>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& HoudiniEngineUnity::HEU_LoadBufferInstancer::__get__collisionAssetPaths() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x50>(this);
}
inline ::HoudiniEngineUnity::HEU_LoadBufferInstancer* HoudiniEngineUnity::HEU_LoadBufferInstancer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>());
}
inline void HoudiniEngineUnity::HEU_LoadBufferInstancer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
