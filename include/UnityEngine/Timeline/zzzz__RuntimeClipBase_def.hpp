#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeClipBase)
// Forward declare root types
namespace UnityEngine::Timeline {
class RuntimeClipBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::RuntimeClipBase);
// Type: UnityEngine.Timeline::RuntimeClipBase
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13884))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13883))
// CS Name: ::UnityEngine.Timeline::RuntimeClipBase*
class CORDL_TYPE RuntimeClipBase : public ::UnityEngine::Timeline::RuntimeElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::Timeline::RuntimeElement)]{};

 __declspec(property(get=get_start)) double_t  start;

 __declspec(property(get=get_duration)) double_t  duration;

 __declspec(property(get=get_intervalStart)) int64_t  intervalStart;

 __declspec(property(get=get_intervalEnd)) int64_t  intervalEnd;

/// @brief Method get_start addr 0x0 size 0xffffffffffffffff virtual true final false
inline double_t get_start() ;

/// @brief Method get_duration addr 0x0 size 0xffffffffffffffff virtual true final false
inline double_t get_duration() ;

/// @brief Method get_intervalStart addr 0x2c67fb0 size 0x70 virtual true final false
inline int64_t get_intervalStart() ;

/// @brief Method get_intervalEnd addr 0x2c68020 size 0x84 virtual true final false
inline int64_t get_intervalEnd() ;

static inline ::UnityEngine::Timeline::RuntimeClipBase* New_ctor() ;

/// @brief Method .ctor addr 0x2c679d0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeClipBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeClipBase(RuntimeClipBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeClipBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeClipBase(RuntimeClipBase const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimeClipBase()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::RuntimeClipBase, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::RuntimeClipBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::RuntimeClipBase*, "UnityEngine.Timeline", "RuntimeClipBase");
