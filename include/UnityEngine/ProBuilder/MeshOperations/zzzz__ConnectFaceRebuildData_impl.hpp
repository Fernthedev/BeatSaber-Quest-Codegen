#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__ConnectFaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::*)(::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*)>(&::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2ba43e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__set_faceRebuildData(::UnityEngine::ProBuilder::FaceRebuildData*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ProBuilder::FaceRebuildData*, 0x10>(this, std::forward<::UnityEngine::ProBuilder::FaceRebuildData*>(value));
}
constexpr ::UnityEngine::ProBuilder::FaceRebuildData* UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__get_faceRebuildData()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::FaceRebuildData*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::FaceRebuildData*> UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__get_faceRebuildData() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ProBuilder::FaceRebuildData*, 0x10>(this);
}
constexpr void UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__set_newVertexIndexes(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::List_1<int32_t>* UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__get_newVertexIndexes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::__get_newVertexIndexes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x18>(this);
}
inline ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData* UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::New_ctor(::UnityEngine::ProBuilder::FaceRebuildData*  faceRebuildData, ::System::Collections::Generic::List_1<int32_t>*  newVertexIndexes)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>(faceRebuildData, newVertexIndexes));
}
inline void UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::_ctor(::UnityEngine::ProBuilder::FaceRebuildData*  faceRebuildData, ::System::Collections::Generic::List_1<int32_t>*  newVertexIndexes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, faceRebuildData, newVertexIndexes);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
