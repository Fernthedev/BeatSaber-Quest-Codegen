#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__TweeningManager_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimeTweeningManager)
// Forward declare root types
namespace Tweening {
class TimeTweeningManager;
}
// Write type traits
MARK_REF_PTR_T(::Tweening::TimeTweeningManager);
// Type: Tweening::TimeTweeningManager
namespace Tweening {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16100))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16097))
// CS Name: ::Tweening::TimeTweeningManager*
class CORDL_TYPE TimeTweeningManager : public ::Tweening::TweeningManager {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Tweening::TweeningManager)]{};

/// @brief Method GetTime addr 0x2a0e3c8 size 0x8 virtual true final false
inline float_t GetTime() ;

static inline ::Tweening::TimeTweeningManager* New_ctor() ;

/// @brief Method .ctor addr 0x2a0e3d0 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TimeTweeningManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeTweeningManager(TimeTweeningManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeTweeningManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeTweeningManager(TimeTweeningManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimeTweeningManager()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::TimeTweeningManager, 0x40>, "Size mismatch!");

} // namespace end def Tweening
NEED_NO_BOX(::Tweening::TimeTweeningManager);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::TimeTweeningManager*, "Tweening", "TimeTweeningManager");
