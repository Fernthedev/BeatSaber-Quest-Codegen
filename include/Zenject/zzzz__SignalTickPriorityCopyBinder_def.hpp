#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__SignalCopyBinder_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignalTickPriorityCopyBinder)
namespace Zenject {
class SignalCopyBinder;
}
namespace Zenject {
class SignalDeclarationBindInfo;
}
// Forward declare root types
namespace Zenject {
class SignalTickPriorityCopyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalTickPriorityCopyBinder);
// Type: Zenject::SignalTickPriorityCopyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10655))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10657))
// CS Name: ::Zenject::SignalTickPriorityCopyBinder*
class CORDL_TYPE SignalTickPriorityCopyBinder : public ::Zenject::SignalCopyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::SignalCopyBinder)]{};

/// @brief Field <SignalBindInfo>k__BackingField offset 0x18
 __declspec(property(get=__get__SignalBindInfo_k__BackingField, put=__set__SignalBindInfo_k__BackingField)) ::Zenject::SignalDeclarationBindInfo*  _SignalBindInfo_k__BackingField;

 __declspec(property(get=get_SignalBindInfo, put=set_SignalBindInfo)) ::Zenject::SignalDeclarationBindInfo*  SignalBindInfo;

constexpr void __set__SignalBindInfo_k__BackingField(::Zenject::SignalDeclarationBindInfo*  value) ;

constexpr ::Zenject::SignalDeclarationBindInfo* __get__SignalBindInfo_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::SignalDeclarationBindInfo*> __get__SignalBindInfo_k__BackingField() const;

static inline ::Zenject::SignalTickPriorityCopyBinder* New_ctor(::Zenject::SignalDeclarationBindInfo*  signalBindInfo) ;

/// @brief Method .ctor addr 0x2ec22e4 size 0x24 virtual false final false
inline void _ctor(::Zenject::SignalDeclarationBindInfo*  signalBindInfo) ;

/// @brief Method get_SignalBindInfo addr 0x2ec2840 size 0x8 virtual false final false
inline ::Zenject::SignalDeclarationBindInfo* get_SignalBindInfo() ;

/// @brief Method set_SignalBindInfo addr 0x2ec2848 size 0x8 virtual false final false
inline void set_SignalBindInfo(::Zenject::SignalDeclarationBindInfo*  value) ;

/// @brief Method WithTickPriority addr 0x2ec2850 size 0x24 virtual false final false
inline ::Zenject::SignalCopyBinder* WithTickPriority(int32_t  priority) ;

// Ctor Parameters [CppParam { name: "", ty: "SignalTickPriorityCopyBinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalTickPriorityCopyBinder(SignalTickPriorityCopyBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalTickPriorityCopyBinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalTickPriorityCopyBinder(SignalTickPriorityCopyBinder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignalTickPriorityCopyBinder()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalTickPriorityCopyBinder, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SignalTickPriorityCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalTickPriorityCopyBinder*, "Zenject", "SignalTickPriorityCopyBinder");
