#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PS5ActivityDataSO)
// Forward declare root types
namespace GlobalNamespace {
class PS5ActivityDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5ActivityDataSO);
// Type: ::PS5ActivityDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4560))
// CS Name: ::PS5ActivityDataSO*
class CORDL_TYPE PS5ActivityDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _activityId offset 0x18
 __declspec(property(get=__get__activityId, put=__set__activityId)) ::StringW  _activityId;

 __declspec(property(get=get_activityId)) ::StringW  activityId;

constexpr void __set__activityId(::StringW  value) ;

constexpr ::StringW& __get__activityId() ;

constexpr ::StringW const& __get__activityId() const;

/// @brief Method get_activityId addr 0x2368290 size 0x8 virtual false final false
inline ::StringW get_activityId() ;

static inline ::GlobalNamespace::PS5ActivityDataSO* New_ctor() ;

/// @brief Method .ctor addr 0x2368270 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PS5ActivityDataSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PS5ActivityDataSO(PS5ActivityDataSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PS5ActivityDataSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PS5ActivityDataSO(PS5ActivityDataSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PS5ActivityDataSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5ActivityDataSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5ActivityDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5ActivityDataSO*, "", "PS5ActivityDataSO");
