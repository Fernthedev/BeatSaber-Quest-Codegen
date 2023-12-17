#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NonLazyBinder_def.hpp"
CORDL_MODULE_EXPORT(CopyNonLazyBinder)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class NonLazyBinder;
}
namespace Zenject {
struct BindingInheritanceMethods;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
class CopyNonLazyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::CopyNonLazyBinder);
// Type: Zenject::CopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10925))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10701))
// CS Name: ::Zenject::CopyNonLazyBinder*
class CORDL_TYPE CopyNonLazyBinder : public ::Zenject::NonLazyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::NonLazyBinder)]{};

/// @brief Field _secondaryBindInfos offset 0x18
 __declspec(property(get=__get__secondaryBindInfos, put=__set__secondaryBindInfos)) ::System::Collections::Generic::List_1<::Zenject::BindInfo*>*  _secondaryBindInfos;

constexpr void __set__secondaryBindInfos(::System::Collections::Generic::List_1<::Zenject::BindInfo*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::BindInfo*>* __get__secondaryBindInfos() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::BindInfo*>*> __get__secondaryBindInfos() const;

static inline ::Zenject::CopyNonLazyBinder* New_ctor(::Zenject::BindInfo*  bindInfo) ;

/// @brief Method .ctor addr 0x2ec7418 size 0x8 virtual false final false
inline void _ctor(::Zenject::BindInfo*  bindInfo) ;

/// @brief Method AddSecondaryCopyBindInfo addr 0x2ecb7ec size 0xf0 virtual false final false
inline void AddSecondaryCopyBindInfo(::Zenject::BindInfo*  bindInfo) ;

/// @brief Method CopyIntoAllSubContainers addr 0x2ec5f60 size 0x1c virtual false final false
inline ::Zenject::NonLazyBinder* CopyIntoAllSubContainers() ;

/// @brief Method CopyIntoDirectSubContainers addr 0x2ecba20 size 0x1c virtual false final false
inline ::Zenject::NonLazyBinder* CopyIntoDirectSubContainers() ;

/// @brief Method MoveIntoAllSubContainers addr 0x2ecba3c size 0x1c virtual false final false
inline ::Zenject::NonLazyBinder* MoveIntoAllSubContainers() ;

/// @brief Method MoveIntoDirectSubContainers addr 0x2ecba58 size 0x1c virtual false final false
inline ::Zenject::NonLazyBinder* MoveIntoDirectSubContainers() ;

/// @brief Method SetInheritanceMethod addr 0x2ecb8dc size 0x144 virtual false final false
inline void SetInheritanceMethod(::Zenject::BindingInheritanceMethods  method) ;

// Ctor Parameters [CppParam { name: "", ty: "CopyNonLazyBinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CopyNonLazyBinder(CopyNonLazyBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CopyNonLazyBinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CopyNonLazyBinder(CopyNonLazyBinder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CopyNonLazyBinder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::CopyNonLazyBinder, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::CopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::CopyNonLazyBinder*, "Zenject", "CopyNonLazyBinder");
