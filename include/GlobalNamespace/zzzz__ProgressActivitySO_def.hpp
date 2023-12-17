#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PS5ActivityDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ProgressActivitySO)
namespace GlobalNamespace {
class ProgressActivitySubtaskSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgressActivitySO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ProgressActivitySO);
// Type: ::ProgressActivitySO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4558))
// CS Name: ::ProgressActivitySO*
class CORDL_TYPE ProgressActivitySO : public ::GlobalNamespace::PS5ActivityDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PS5ActivityDataSO)]{};

/// @brief Field subtasks offset 0x20
 __declspec(property(get=__get_subtasks, put=__set_subtasks)) ::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*,::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*>  subtasks;

constexpr void __set_subtasks(::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*,::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*,::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*>& __get_subtasks() ;

constexpr ::ArrayW<::GlobalNamespace::ProgressActivitySubtaskSO*,::Array<::GlobalNamespace::ProgressActivitySubtaskSO*>*> const& __get_subtasks() const;

static inline ::GlobalNamespace::ProgressActivitySO* New_ctor() ;

/// @brief Method .ctor addr 0x2368278 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ProgressActivitySO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressActivitySO(ProgressActivitySO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressActivitySO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressActivitySO(ProgressActivitySO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ProgressActivitySO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ProgressActivitySO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ProgressActivitySO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ProgressActivitySO*, "", "ProgressActivitySO");
