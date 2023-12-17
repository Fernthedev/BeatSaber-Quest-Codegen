#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VertexEntry_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VertexEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VertexEntry::*)(int32_t, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_VertexEntry::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x21c22b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VertexEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_VertexEntry::__set__meshKey(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_VertexEntry::__get__meshKey()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VertexEntry::__get__meshKey() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_VertexEntry::__set__vertexIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_VertexEntry::__get__vertexIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VertexEntry::__get__vertexIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void HoudiniEngineUnity::HEU_VertexEntry::__set__normalIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_VertexEntry::__get__normalIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VertexEntry::__get__normalIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
inline ::HoudiniEngineUnity::HEU_VertexEntry* HoudiniEngineUnity::HEU_VertexEntry::New_ctor(int32_t  meshKey, int32_t  vertexIndex, int32_t  normalIndex)  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_VertexEntry*>(meshKey, vertexIndex, normalIndex));
}
inline void HoudiniEngineUnity::HEU_VertexEntry::_ctor(int32_t  meshKey, int32_t  vertexIndex, int32_t  normalIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VertexEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, meshKey, vertexIndex, normalIndex);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
