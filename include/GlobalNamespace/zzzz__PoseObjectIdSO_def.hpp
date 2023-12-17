#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PoseObjectIdSO)
// Forward declare root types
namespace GlobalNamespace {
class PoseObjectIdSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PoseObjectIdSO);
// Type: ::PoseObjectIdSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5928))
// CS Name: ::PoseObjectIdSO*
class CORDL_TYPE PoseObjectIdSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _serializedId offset 0x18
 __declspec(property(get=__get__serializedId, put=__set__serializedId)) ::StringW  _serializedId;

 __declspec(property(get=get_id)) ::StringW  id;

constexpr void __set__serializedId(::StringW  value) ;

constexpr ::StringW& __get__serializedId() ;

constexpr ::StringW const& __get__serializedId() const;

/// @brief Method get_id addr 0x23017b0 size 0x8 virtual false final false
inline ::StringW get_id() ;

static inline ::GlobalNamespace::PoseObjectIdSO* New_ctor() ;

/// @brief Method .ctor addr 0x23017b8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PoseObjectIdSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PoseObjectIdSO(PoseObjectIdSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoseObjectIdSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoseObjectIdSO(PoseObjectIdSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PoseObjectIdSO()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PoseObjectIdSO, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PoseObjectIdSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PoseObjectIdSO*, "", "PoseObjectIdSO");
