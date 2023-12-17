#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Profiling/Memory/Experimental/zzzz__MetaData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Profiling::Memory::Experimental::MetaData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Profiling::Memory::Experimental::MetaData::*)()>(&::UnityEngine::Profiling::Memory::Experimental::MetaData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ce6cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MetaData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Profiling::Memory::Experimental::MetaData::__set_content(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::Profiling::Memory::Experimental::MetaData::__get_content()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::Profiling::Memory::Experimental::MetaData::__get_content() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void UnityEngine::Profiling::Memory::Experimental::MetaData::__set_platform(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::Profiling::Memory::Experimental::MetaData::__get_platform()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& UnityEngine::Profiling::Memory::Experimental::MetaData::__get_platform() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::UnityEngine::Profiling::Memory::Experimental::MetaData* UnityEngine::Profiling::Memory::Experimental::MetaData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Profiling::Memory::Experimental::MetaData*>());
}
inline void UnityEngine::Profiling::Memory::Experimental::MetaData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Profiling::Memory::Experimental::MetaData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
