#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__TweeningManager_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SongTimeTweeningManager)
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace Tweening {
class SongTimeTweeningManager;
}
// Write type traits
MARK_REF_PTR_T(::Tweening::SongTimeTweeningManager);
// Type: Tweening::SongTimeTweeningManager
namespace Tweening {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16100))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6087))
// CS Name: ::Tweening::SongTimeTweeningManager*
class CORDL_TYPE SongTimeTweeningManager : public ::Tweening::TweeningManager {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::Tweening::TweeningManager)]{};

/// @brief Field _audioTimeSource offset 0x40
 __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSource;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSource() const;

/// @brief Method GetTime addr 0x2321258 size 0xa0 virtual true final false
inline float_t GetTime() ;

static inline ::Tweening::SongTimeTweeningManager* New_ctor() ;

/// @brief Method .ctor addr 0x23212f8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeTweeningManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SongTimeTweeningManager(SongTimeTweeningManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SongTimeTweeningManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SongTimeTweeningManager(SongTimeTweeningManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SongTimeTweeningManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::SongTimeTweeningManager, 0x48>, "Size mismatch!");

} // namespace end def Tweening
NEED_NO_BOX(::Tweening::SongTimeTweeningManager);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::SongTimeTweeningManager*, "Tweening", "SongTimeTweeningManager");
