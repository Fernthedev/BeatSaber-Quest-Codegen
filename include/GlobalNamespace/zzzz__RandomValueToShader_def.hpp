#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RandomValueToShader)
// Forward declare root types
namespace GlobalNamespace {
class RandomValueToShader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RandomValueToShader);
// Type: ::RandomValueToShader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14495))
// CS Name: ::RandomValueToShader*
class CORDL_TYPE RandomValueToShader : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _lastFrameNum offset 0x18
 __declspec(property(get=__get__lastFrameNum, put=__set__lastFrameNum)) int32_t  _lastFrameNum;

constexpr void __set__lastFrameNum(int32_t  value) ;

constexpr int32_t& __get__lastFrameNum() ;

constexpr int32_t const& __get__lastFrameNum() const;

static inline void setStaticF__randomValueID(int32_t  value) ;

static inline int32_t getStaticF__randomValueID() ;

/// @brief Method SetRandomValueToShaders addr 0x210b188 size 0x8c virtual false final false
inline void SetRandomValueToShaders() ;

static inline ::GlobalNamespace::RandomValueToShader* New_ctor() ;

/// @brief Method .ctor addr 0x210b21c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RandomValueToShader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomValueToShader(RandomValueToShader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomValueToShader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomValueToShader(RandomValueToShader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RandomValueToShader()  = default;
public:


// Fields

// Static field _randomValueID


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomValueToShader, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RandomValueToShader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomValueToShader*, "", "RandomValueToShader");
