#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_VertexEntry)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VertexEntry;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_VertexEntry);
// Type: HoudiniEngineUnity::HEU_VertexEntry
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9836))
// CS Name: ::HoudiniEngineUnity::HEU_VertexEntry*
class CORDL_TYPE HEU_VertexEntry : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _meshKey offset 0x10
 __declspec(property(get=__get__meshKey, put=__set__meshKey)) int32_t  _meshKey;

/// @brief Field _vertexIndex offset 0x14
 __declspec(property(get=__get__vertexIndex, put=__set__vertexIndex)) int32_t  _vertexIndex;

/// @brief Field _normalIndex offset 0x18
 __declspec(property(get=__get__normalIndex, put=__set__normalIndex)) int32_t  _normalIndex;

constexpr void __set__meshKey(int32_t  value) ;

constexpr int32_t& __get__meshKey() ;

constexpr int32_t const& __get__meshKey() const;

constexpr void __set__vertexIndex(int32_t  value) ;

constexpr int32_t& __get__vertexIndex() ;

constexpr int32_t const& __get__vertexIndex() const;

constexpr void __set__normalIndex(int32_t  value) ;

constexpr int32_t& __get__normalIndex() ;

constexpr int32_t const& __get__normalIndex() const;

static inline ::HoudiniEngineUnity::HEU_VertexEntry* New_ctor(int32_t  meshKey, int32_t  vertexIndex, int32_t  normalIndex) ;

/// @brief Method .ctor addr 0x21c22b8 size 0x3c virtual false final false
inline void _ctor(int32_t  meshKey, int32_t  vertexIndex, int32_t  normalIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VertexEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_VertexEntry(HEU_VertexEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VertexEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_VertexEntry(HEU_VertexEntry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_VertexEntry()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_VertexEntry, 0x20>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_VertexEntry);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_VertexEntry*, "HoudiniEngineUnity", "HEU_VertexEntry");
