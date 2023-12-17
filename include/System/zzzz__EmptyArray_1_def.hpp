#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EmptyArray_1)
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace GlobalNamespace {
struct __AveragingValueRecorder__AverageValueData;
}
namespace GlobalNamespace {
struct __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__UnboundAnchor;
}
namespace GlobalNamespace {
struct __OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData;
}
namespace GlobalNamespace {
struct __SongRunningHelper__QueuedSongParams;
}
namespace LiteNetLib {
struct __NatPunchModule__RequestEventData;
}
namespace LiteNetLib {
struct __NatPunchModule__SuccessEventData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
class Object;
}
namespace System {
struct DateTime;
}
namespace System {
struct Guid;
}
namespace System::Reflection {
struct CustomAttributeNamedArgument;
}
namespace System::Reflection {
struct CustomAttributeTypedArgument;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Xml::Schema {
struct __SequenceNode__SequenceConstructPosContext;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements::StyleSheets {
struct __BaseStyleMatcher__MatchContext;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
struct __EventDispatcher__DispatchContext;
}
namespace UnityEngine::UIElements {
struct __EventDispatcher__EventRecord;
}
namespace UnityEngine::UIElements {
struct __StyleVariableResolver__ResolveContext;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace System {
template<typename T>
class EmptyArray_1;
}
namespace System {
template<>
class EmptyArray_1<::GlobalNamespace::MultiplayerAvatarData>;
}
namespace System {
template<>
class EmptyArray_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>;
}
namespace System {
template<>
class EmptyArray_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>;
}
namespace System {
template<>
class EmptyArray_1<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>;
}
namespace System {
template<>
class EmptyArray_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>;
}
namespace System {
template<>
class EmptyArray_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>;
}
namespace System {
template<>
class EmptyArray_1<::LiteNetLib::__NatPunchModule__RequestEventData>;
}
namespace System {
template<>
class EmptyArray_1<::LiteNetLib::__NatPunchModule__SuccessEventData>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type TKey_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_1>
class EmptyArray_1<::System::Collections::Generic::KeyValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>>;
}
namespace System {
template<>
class EmptyArray_1<::System::DateTime>;
}
namespace System {
template<>
class EmptyArray_1<::System::Guid>;
}
namespace System {
template<>
class EmptyArray_1<::System::Reflection::CustomAttributeNamedArgument>;
}
namespace System {
template<>
class EmptyArray_1<::System::Reflection::CustomAttributeTypedArgument>;
}
namespace System {
template<>
class EmptyArray_1<::System::Reflection::ParameterModifier>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
class EmptyArray_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>;
}
namespace System {
template<>
class EmptyArray_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::Matrix4x4>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::Rect>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::UIElements::TextureId>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::Vector2>;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type T>
class EmptyArray_1<T>;
}
namespace System {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class EmptyArray_1<T>;
}
namespace System {
template<>
class EmptyArray_1<bool>;
}
namespace System {
template<>
class EmptyArray_1<char16_t>;
}
namespace System {
template<>
class EmptyArray_1<float_t>;
}
namespace System {
template<>
class EmptyArray_1<int32_t>;
}
namespace System {
template<>
class EmptyArray_1<uint16_t>;
}
namespace System {
template<>
class EmptyArray_1<uint32_t>;
}
namespace System {
template<>
class EmptyArray_1<uint8_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::EmptyArray_1);
// Type: System::EmptyArray`1
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 6943 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::System::Reflection::ParameterModifier> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  value) ;

static inline ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T1_cordlgen_0>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 6145 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::System::ValueTuple_2<T1_cordlgen_0,int64_t>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::System::ValueTuple_2<T1_cordlgen_0,int64_t>,::Array<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*>  value) ;

static inline ::ArrayW<::System::ValueTuple_2<T1_cordlgen_0,int64_t>,::Array<::System::ValueTuple_2<T1_cordlgen_0,int64_t>>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 6053 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext,::Array<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*>  value) ;

static inline ::ArrayW<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext,::Array<::System::Xml::Schema::__SequenceNode__SequenceConstructPosContext>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 5019 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext,::Array<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*>  value) ;

static inline ::ArrayW<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext,::Array<::UnityEngine::UIElements::__StyleVariableResolver__ResolveContext>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 5018 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::UnityEngine::UIElements::__EventDispatcher__DispatchContext,::Array<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*>  value) ;

static inline ::ArrayW<::UnityEngine::UIElements::__EventDispatcher__DispatchContext,::Array<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 5017 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext,::Array<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*>  value) ;

static inline ::ArrayW<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext,::Array<::UnityEngine::UIElements::StyleSheets::__BaseStyleMatcher__MatchContext>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 5016 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::UnityEngine::UIElements::TextureId> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::UnityEngine::UIElements::TextureId,::Array<::UnityEngine::UIElements::TextureId>*>  value) ;

static inline ::ArrayW<::UnityEngine::UIElements::TextureId,::Array<::UnityEngine::UIElements::TextureId>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 4884 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData,::Array<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*>  value) ;

static inline ::ArrayW<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData,::Array<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 4883 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::LiteNetLib::__NatPunchModule__SuccessEventData> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::LiteNetLib::__NatPunchModule__SuccessEventData,::Array<::LiteNetLib::__NatPunchModule__SuccessEventData>*>  value) ;

static inline ::ArrayW<::LiteNetLib::__NatPunchModule__SuccessEventData,::Array<::LiteNetLib::__NatPunchModule__SuccessEventData>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 4882 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::LiteNetLib::__NatPunchModule__RequestEventData> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::LiteNetLib::__NatPunchModule__RequestEventData,::Array<::LiteNetLib::__NatPunchModule__RequestEventData>*>  value) ;

static inline ::ArrayW<::LiteNetLib::__NatPunchModule__RequestEventData,::Array<::LiteNetLib::__NatPunchModule__RequestEventData>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 4881 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData,::Array<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*>  value) ;

static inline ::ArrayW<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData,::Array<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 4880 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::UnityEngine::UIElements::__EventDispatcher__EventRecord,::Array<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>  value) ;

static inline ::ArrayW<::UnityEngine::UIElements::__EventDispatcher__EventRecord,::Array<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 4879 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::GlobalNamespace::__AveragingValueRecorder__AverageValueData,::Array<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*>  value) ;

static inline ::ArrayW<::GlobalNamespace::__AveragingValueRecorder__AverageValueData,::Array<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 4780 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::GlobalNamespace::__SongRunningHelper__QueuedSongParams,::Array<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*>  value) ;

static inline ::ArrayW<::GlobalNamespace::__SongRunningHelper__QueuedSongParams,::Array<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 4407 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor,::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*>  value) ;

static inline ::ArrayW<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor,::Array<::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 4231 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::GlobalNamespace::MultiplayerAvatarData> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*>  value) ;

static inline ::ArrayW<::GlobalNamespace::MultiplayerAvatarData,::Array<::GlobalNamespace::MultiplayerAvatarData>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 3607 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::System::Reflection::CustomAttributeTypedArgument> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::System::Reflection::CustomAttributeTypedArgument,::Array<::System::Reflection::CustomAttributeTypedArgument>*>  value) ;

static inline ::ArrayW<::System::Reflection::CustomAttributeTypedArgument,::Array<::System::Reflection::CustomAttributeTypedArgument>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 3606 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::System::Reflection::CustomAttributeNamedArgument> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::System::Reflection::CustomAttributeNamedArgument,::Array<::System::Reflection::CustomAttributeNamedArgument>*>  value) ;

static inline ::ArrayW<::System::Reflection::CustomAttributeNamedArgument,::Array<::System::Reflection::CustomAttributeNamedArgument>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 3345 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::UnityEngine::Rect> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*>  value) ;

static inline ::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 3316 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::UnityEngine::Matrix4x4> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*>  value) ;

static inline ::ArrayW<::UnityEngine::Matrix4x4,::Array<::UnityEngine::Matrix4x4>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TKey_cordlgen_0,::il2cpp_utils::il2cpp_reference_type TValue_cordlgen_1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 3058 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::System::Collections::Generic::KeyValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>>*>  value) ;

static inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>,::Array<::System::Collections::Generic::KeyValuePair_2<TKey_cordlgen_0,TValue_cordlgen_1>>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 2701 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::System::DateTime> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::System::DateTime,::Array<::System::DateTime>*>  value) ;

static inline ::ArrayW<::System::DateTime,::Array<::System::DateTime>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 974 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<T,::Array<T>*>  value) ;

static inline ::ArrayW<T,::Array<T>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 753 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<uint32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 752 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<uint16_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<uint16_t,::Array<uint16_t>*>  value) ;

static inline ::ArrayW<uint16_t,::Array<uint16_t>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 741 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<uint8_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 411 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::UnityEngine::Vector2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  value) ;

static inline ::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 391 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<float_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<float_t,::Array<float_t>*>  value) ;

static inline ::ArrayW<float_t,::Array<float_t>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 314 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<::System::Guid> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<::System::Guid,::Array<::System::Guid>*>  value) ;

static inline ::ArrayW<::System::Guid,::Array<::System::Guid>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 292 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<char16_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 105 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<bool> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<bool,::Array<bool>*>  value) ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2592))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 98 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2592)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2592), inst: 2 })
// CS Name: ::System::EmptyArray`1<T>*
class CORDL_TYPE EmptyArray_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Value(::ArrayW<T,::Array<T>*>  value) ;

static inline ::ArrayW<T,::Array<T>*> getStaticF_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyArray_1(EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyArray_1(EmptyArray_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyArray_1()  = default;
public:


// Fields

// Static field Value


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::EmptyArray_1, "System", "EmptyArray`1");
