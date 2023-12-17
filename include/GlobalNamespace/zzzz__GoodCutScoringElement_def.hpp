#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScoringElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GoodCutScoringElement)
namespace GlobalNamespace {
class ICutScoreBufferDidFinishReceiver;
}
namespace GlobalNamespace {
class __GoodCutScoringElement__Pool;
}
namespace GlobalNamespace {
struct __ScoreMultiplierCounter__MultiplierEventType;
}
namespace GlobalNamespace {
class CutScoreBuffer;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class GoodCutScoringElement;
}
namespace GlobalNamespace {
class __GoodCutScoringElement__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GoodCutScoringElement);
MARK_REF_PTR_T(::GlobalNamespace::__GoodCutScoringElement__Pool);
// Type: ::GoodCutScoringElement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5323))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5325))
// CS Name: ::GoodCutScoringElement*
class CORDL_TYPE GoodCutScoringElement : public ::GlobalNamespace::ScoringElement {
public:
// Declarations
using Pool = ::GlobalNamespace::__GoodCutScoringElement__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::ScoringElement)]{};

/// @brief Field _cutScoreBuffer offset 0x28
 __declspec(property(get=__get__cutScoreBuffer, put=__set__cutScoreBuffer)) ::GlobalNamespace::CutScoreBuffer*  _cutScoreBuffer;

/// @brief Field _multiplierEventType offset 0x30
 __declspec(property(get=__get__multiplierEventType, put=__set__multiplierEventType)) ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType  _multiplierEventType;

/// @brief Field _wouldBeCorrectCutBestPossibleMultiplierEventType offset 0x34
 __declspec(property(get=__get__wouldBeCorrectCutBestPossibleMultiplierEventType, put=__set__wouldBeCorrectCutBestPossibleMultiplierEventType)) ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType  _wouldBeCorrectCutBestPossibleMultiplierEventType;

 __declspec(property(get=get_cutScore)) int32_t  cutScore;

 __declspec(property(get=get_wouldBeCorrectCutBestPossibleMultiplierEventType)) ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType  wouldBeCorrectCutBestPossibleMultiplierEventType;

 __declspec(property(get=get_multiplierEventType)) ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType  multiplierEventType;

 __declspec(property(get=get_cutScoreBuffer)) ::GlobalNamespace::IReadonlyCutScoreBuffer*  cutScoreBuffer;

 __declspec(property(get=get_executionOrder)) int32_t  executionOrder;

/// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidFinishReceiver"
constexpr operator  ::GlobalNamespace::ICutScoreBufferDidFinishReceiver*() noexcept;

constexpr void __set__cutScoreBuffer(::GlobalNamespace::CutScoreBuffer*  value) ;

constexpr ::GlobalNamespace::CutScoreBuffer* __get__cutScoreBuffer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CutScoreBuffer*> __get__cutScoreBuffer() const;

constexpr void __set__multiplierEventType(::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType  value) ;

constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType& __get__multiplierEventType() ;

constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType const& __get__multiplierEventType() const;

constexpr void __set__wouldBeCorrectCutBestPossibleMultiplierEventType(::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType  value) ;

constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType& __get__wouldBeCorrectCutBestPossibleMultiplierEventType() ;

constexpr ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType const& __get__wouldBeCorrectCutBestPossibleMultiplierEventType() const;

/// @brief Method get_cutScore addr 0x2267eb4 size 0x40 virtual true final false
inline int32_t get_cutScore() ;

/// @brief Method get_wouldBeCorrectCutBestPossibleMultiplierEventType addr 0x2267ef4 size 0x8 virtual true final false
inline ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType get_wouldBeCorrectCutBestPossibleMultiplierEventType() ;

/// @brief Method get_multiplierEventType addr 0x2267efc size 0x8 virtual true final false
inline ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType get_multiplierEventType() ;

/// @brief Method get_cutScoreBuffer addr 0x2267f04 size 0x8 virtual false final false
inline ::GlobalNamespace::IReadonlyCutScoreBuffer* get_cutScoreBuffer() ;

/// @brief Method get_executionOrder addr 0x2267f0c size 0x24 virtual true final false
inline int32_t get_executionOrder() ;

/// @brief Method Reinitialize addr 0x2267f30 size 0x18 virtual true final false
inline void Reinitialize() ;

/// @brief Method Init addr 0x2267994 size 0x70 virtual false final false
inline void Init(::GlobalNamespace::NoteCutInfo  noteCutInfo) ;

/// @brief Method HandleCutScoreBufferDidFinish addr 0x2267f48 size 0x24 virtual true final true
inline void HandleCutScoreBufferDidFinish(::GlobalNamespace::CutScoreBuffer*  cutScoreBuffer) ;

static inline ::GlobalNamespace::GoodCutScoringElement* New_ctor() ;

/// @brief Method .ctor addr 0x2267f6c size 0x64 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GoodCutScoringElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GoodCutScoringElement(GoodCutScoringElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GoodCutScoringElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GoodCutScoringElement(GoodCutScoringElement const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GoodCutScoringElement()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GoodCutScoringElement, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5322)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5322), inst: 2814 }), TypeDefinitionIndex(TypeDefinitionIndex(5325))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5324))
// CS Name: ::GoodCutScoringElement::Pool*
class CORDL_TYPE __GoodCutScoringElement__Pool : public ::GlobalNamespace::__ScoringElement__Pool_1<::GlobalNamespace::GoodCutScoringElement*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::__ScoringElement__Pool_1<::GlobalNamespace::GoodCutScoringElement*>)]{};

static inline ::GlobalNamespace::__GoodCutScoringElement__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x2267fd0 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__GoodCutScoringElement__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GoodCutScoringElement__Pool(__GoodCutScoringElement__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GoodCutScoringElement__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GoodCutScoringElement__Pool(__GoodCutScoringElement__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GoodCutScoringElement__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GoodCutScoringElement__Pool, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GoodCutScoringElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GoodCutScoringElement*, "", "GoodCutScoringElement");
NEED_NO_BOX(::GlobalNamespace::__GoodCutScoringElement__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GoodCutScoringElement__Pool*, "", "GoodCutScoringElement/Pool");
