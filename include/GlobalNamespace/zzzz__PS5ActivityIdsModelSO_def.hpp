#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PS5ActivityIdsModelSO)
namespace GlobalNamespace {
class ProgressActivitySO;
}
namespace GlobalNamespace {
class CompetetiveActivitySO;
}
// Forward declare root types
namespace GlobalNamespace {
class PS5ActivityIdsModelSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5ActivityIdsModelSO);
// Type: ::PS5ActivityIdsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4561))
// CS Name: ::PS5ActivityIdsModelSO*
class CORDL_TYPE PS5ActivityIdsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _progressActivities offset 0x18
 __declspec(property(get=__get__progressActivities, put=__set__progressActivities)) ::ArrayW<::GlobalNamespace::ProgressActivitySO*,::Array<::GlobalNamespace::ProgressActivitySO*>*>  _progressActivities;

/// @brief Field _competetiveActivities offset 0x20
 __declspec(property(get=__get__competetiveActivities, put=__set__competetiveActivities)) ::ArrayW<::GlobalNamespace::CompetetiveActivitySO*,::Array<::GlobalNamespace::CompetetiveActivitySO*>*>  _competetiveActivities;

 __declspec(property(get=get_progressActivities)) ::ArrayW<::GlobalNamespace::ProgressActivitySO*,::Array<::GlobalNamespace::ProgressActivitySO*>*>  progressActivities;

 __declspec(property(get=get_competetiveActivities)) ::ArrayW<::GlobalNamespace::CompetetiveActivitySO*,::Array<::GlobalNamespace::CompetetiveActivitySO*>*>  competetiveActivities;

constexpr void __set__progressActivities(::ArrayW<::GlobalNamespace::ProgressActivitySO*,::Array<::GlobalNamespace::ProgressActivitySO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::ProgressActivitySO*,::Array<::GlobalNamespace::ProgressActivitySO*>*>& __get__progressActivities() ;

constexpr ::ArrayW<::GlobalNamespace::ProgressActivitySO*,::Array<::GlobalNamespace::ProgressActivitySO*>*> const& __get__progressActivities() const;

constexpr void __set__competetiveActivities(::ArrayW<::GlobalNamespace::CompetetiveActivitySO*,::Array<::GlobalNamespace::CompetetiveActivitySO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::CompetetiveActivitySO*,::Array<::GlobalNamespace::CompetetiveActivitySO*>*>& __get__competetiveActivities() ;

constexpr ::ArrayW<::GlobalNamespace::CompetetiveActivitySO*,::Array<::GlobalNamespace::CompetetiveActivitySO*>*> const& __get__competetiveActivities() const;

/// @brief Method get_progressActivities addr 0x2368298 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::ProgressActivitySO*,::Array<::GlobalNamespace::ProgressActivitySO*>*> get_progressActivities() ;

/// @brief Method get_competetiveActivities addr 0x23682a0 size 0x8 virtual false final false
inline ::ArrayW<::GlobalNamespace::CompetetiveActivitySO*,::Array<::GlobalNamespace::CompetetiveActivitySO*>*> get_competetiveActivities() ;

static inline ::GlobalNamespace::PS5ActivityIdsModelSO* New_ctor() ;

/// @brief Method .ctor addr 0x23682a8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PS5ActivityIdsModelSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS5ActivityIdsModelSO(PS5ActivityIdsModelSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS5ActivityIdsModelSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS5ActivityIdsModelSO(PS5ActivityIdsModelSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PS5ActivityIdsModelSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5ActivityIdsModelSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5ActivityIdsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5ActivityIdsModelSO*, "", "PS5ActivityIdsModelSO");
