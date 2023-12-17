#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoSync_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoSync.SetupLoadTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoSync::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_GeoSync::SetupLoadTask)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x21a9f68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoSync*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoSync._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoSync::*)()>(&::HoudiniEngineUnity::HEU_GeoSync::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21aa014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoSync*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_GeoSync::__set__filePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x80>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_GeoSync::__get__filePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_GeoSync::__get__filePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this);
}
inline void HoudiniEngineUnity::HEU_GeoSync::SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoSync*>::get(),
                            "SetupLoadTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline ::HoudiniEngineUnity::HEU_GeoSync* HoudiniEngineUnity::HEU_GeoSync::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_GeoSync*>());
}
inline void HoudiniEngineUnity::HEU_GeoSync::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoSync*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
