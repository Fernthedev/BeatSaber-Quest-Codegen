#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Util/zzzz__TokenizerStringBlock_def.hpp"
//  Writing Method size for method: ::System::Security::Util::TokenizerStringBlock._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Util::TokenizerStringBlock::*)()>(&::System::Security::Util::TokenizerStringBlock::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2456554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::TokenizerStringBlock*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Util::TokenizerStringBlock::__set_m_block(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Security::Util::TokenizerStringBlock::__get_m_block()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Security::Util::TokenizerStringBlock::__get_m_block() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x10>(this);
}
constexpr void System::Security::Util::TokenizerStringBlock::__set_m_next(::System::Security::Util::TokenizerStringBlock*  value)  {
::cordl_internals::setInstanceField<::System::Security::Util::TokenizerStringBlock*, 0x18>(this, std::forward<::System::Security::Util::TokenizerStringBlock*>(value));
}
constexpr ::System::Security::Util::TokenizerStringBlock* System::Security::Util::TokenizerStringBlock::__get_m_next()  {
return ::cordl_internals::getInstanceField<::System::Security::Util::TokenizerStringBlock*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Util::TokenizerStringBlock*> System::Security::Util::TokenizerStringBlock::__get_m_next() const {
return ::cordl_internals::getInstanceField<::System::Security::Util::TokenizerStringBlock*, 0x18>(this);
}
inline ::System::Security::Util::TokenizerStringBlock* System::Security::Util::TokenizerStringBlock::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Util::TokenizerStringBlock*>());
}
inline void System::Security::Util::TokenizerStringBlock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Util::TokenizerStringBlock*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
