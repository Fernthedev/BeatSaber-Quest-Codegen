#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__CaseInsensitiveHashCodeProvider_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Collections/zzzz__IHashCodeProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Collections::CaseInsensitiveHashCodeProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::CaseInsensitiveHashCodeProvider::*)()>(&::System::Collections::CaseInsensitiveHashCodeProvider::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x257df48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveHashCodeProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CaseInsensitiveHashCodeProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::CaseInsensitiveHashCodeProvider::*)(::System::Globalization::CultureInfo*)>(&::System::Collections::CaseInsensitiveHashCodeProvider::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x257dfc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveHashCodeProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CaseInsensitiveHashCodeProvider.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::CaseInsensitiveHashCodeProvider::*)(::System::Object*)>(&::System::Collections::CaseInsensitiveHashCodeProvider::GetHashCode)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x257e048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveHashCodeProvider*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IHashCodeProvider"
constexpr  System::Collections::CaseInsensitiveHashCodeProvider::operator ::System::Collections::IHashCodeProvider*() noexcept {
return static_cast<::System::Collections::IHashCodeProvider*>(static_cast<void*>(this));
}
constexpr void System::Collections::CaseInsensitiveHashCodeProvider::__set__compareInfo(::System::Globalization::CompareInfo*  value)  {
::cordl_internals::setInstanceField<::System::Globalization::CompareInfo*, 0x10>(this, std::forward<::System::Globalization::CompareInfo*>(value));
}
constexpr ::System::Globalization::CompareInfo* System::Collections::CaseInsensitiveHashCodeProvider::__get__compareInfo()  {
return ::cordl_internals::getInstanceField<::System::Globalization::CompareInfo*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CompareInfo*> System::Collections::CaseInsensitiveHashCodeProvider::__get__compareInfo() const {
return ::cordl_internals::getInstanceField<::System::Globalization::CompareInfo*, 0x10>(this);
}
inline ::System::Collections::CaseInsensitiveHashCodeProvider* System::Collections::CaseInsensitiveHashCodeProvider::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::CaseInsensitiveHashCodeProvider*>());
}
inline void System::Collections::CaseInsensitiveHashCodeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveHashCodeProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::CaseInsensitiveHashCodeProvider* System::Collections::CaseInsensitiveHashCodeProvider::New_ctor(::System::Globalization::CultureInfo*  culture)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::CaseInsensitiveHashCodeProvider*>(culture));
}
inline void System::Collections::CaseInsensitiveHashCodeProvider::_ctor(::System::Globalization::CultureInfo*  culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveHashCodeProvider*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, culture);
}
inline int32_t System::Collections::CaseInsensitiveHashCodeProvider::GetHashCode(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveHashCodeProvider*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
