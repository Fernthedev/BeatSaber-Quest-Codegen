#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__AssetFileNameExtensionAttribute_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssetFileNameExtensionAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AssetFileNameExtensionAttribute::*)(::StringW, ::ArrayW<::StringW,::Array<::StringW>*>)>(&::UnityEngine::AssetFileNameExtensionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2d1801c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetFileNameExtensionAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::AssetFileNameExtensionAttribute::__set__preferredExtension_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::AssetFileNameExtensionAttribute::__get__preferredExtension_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::AssetFileNameExtensionAttribute::__get__preferredExtension_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void UnityEngine::AssetFileNameExtensionAttribute::__set__otherExtensions_k__BackingField(::System::Collections::Generic::IEnumerable_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<::StringW>*, 0x18>(this, std::forward<::System::Collections::Generic::IEnumerable_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::AssetFileNameExtensionAttribute::__get__otherExtensions_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::StringW>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> UnityEngine::AssetFileNameExtensionAttribute::__get__otherExtensions_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::StringW>*, 0x18>(this);
}
inline ::UnityEngine::AssetFileNameExtensionAttribute* UnityEngine::AssetFileNameExtensionAttribute::New_ctor(::StringW  preferredExtension, ::ArrayW<::StringW,::Array<::StringW>*>  otherExtensions)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::AssetFileNameExtensionAttribute*>(preferredExtension, otherExtensions));
}
inline void UnityEngine::AssetFileNameExtensionAttribute::_ctor(::StringW  preferredExtension, ::ArrayW<::StringW,::Array<::StringW>*>  otherExtensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AssetFileNameExtensionAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, preferredExtension, otherExtensions);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
