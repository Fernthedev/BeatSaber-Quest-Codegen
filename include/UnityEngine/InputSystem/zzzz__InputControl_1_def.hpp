#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControl_1)
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputProcessor_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::XR {
struct Bone;
}
namespace UnityEngine::InputSystem::XR {
struct Eyes;
}
namespace UnityEngine::InputSystem::XR {
struct PoseState;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputControl_1;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<::UnityEngine::InputSystem::LowLevel::TouchState>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<::UnityEngine::InputSystem::XR::Bone>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<::UnityEngine::InputSystem::XR::Eyes>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<::UnityEngine::InputSystem::XR::PoseState>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<::UnityEngine::Quaternion>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<::UnityEngine::Vector2>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<::UnityEngine::Vector3>;
}
namespace UnityEngine::InputSystem {
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
class InputControl_1<TValue>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<bool>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<double_t>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<float_t>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<int32_t>;
}
namespace UnityEngine::InputSystem {
template<>
class InputControl_1<uint32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::InputControl_1);
// Type: UnityEngine.InputSystem::InputControl`1
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), TypeDefinitionIndex(TypeDefinitionIndex(6215))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 3896 })
// CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1<::UnityEngine::InputSystem::LowLevel::TouchState> : public ::UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::InputSystem::InputControl)]{};

/// @brief Field m_ProcessorStack offset 0xd8
 __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::LowLevel::TouchState>*>  m_ProcessorStack;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::LowLevel::TouchState>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::LowLevel::TouchState>*>*>  processors;

constexpr void __set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::LowLevel::TouchState>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::LowLevel::TouchState>*>& __get_m_ProcessorStack() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::LowLevel::TouchState>*> const& __get_m_ProcessorStack() const;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::TouchState ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::TouchState ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::TouchState ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::TouchState ReadValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::TouchState ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::InputSystem::LowLevel::TouchState ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromObjectIntoState(::System::Object*  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueIntoState(::UnityEngine::InputSystem::LowLevel::TouchState  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CompareValue(::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::TouchState ProcessValue(::UnityEngine::InputSystem::LowLevel::TouchState  value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
inline TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddProcessor(::System::Object*  processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::LowLevel::TouchState>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::LowLevel::TouchState>*>*> get_processors() ;

static inline ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::LowLevel::TouchState>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControl_1(InputControl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControl_1(InputControl_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputControl_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), TypeDefinitionIndex(TypeDefinitionIndex(6215))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 3894 })
// CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1<::UnityEngine::InputSystem::XR::PoseState> : public ::UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::InputSystem::InputControl)]{};

/// @brief Field m_ProcessorStack offset 0xd8
 __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::PoseState>*>  m_ProcessorStack;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::PoseState>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::PoseState>*>*>  processors;

constexpr void __set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::PoseState>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::PoseState>*>& __get_m_ProcessorStack() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::PoseState>*> const& __get_m_ProcessorStack() const;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::PoseState ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::PoseState ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::PoseState ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::PoseState ReadValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::PoseState ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::InputSystem::XR::PoseState ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromObjectIntoState(::System::Object*  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueIntoState(::UnityEngine::InputSystem::XR::PoseState  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CompareValue(::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::PoseState ProcessValue(::UnityEngine::InputSystem::XR::PoseState  value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
inline TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddProcessor(::System::Object*  processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::PoseState>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::PoseState>*>*> get_processors() ;

static inline ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::XR::PoseState>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControl_1(InputControl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControl_1(InputControl_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputControl_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), TypeDefinitionIndex(TypeDefinitionIndex(6215))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 3893 })
// CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1<::UnityEngine::InputSystem::XR::Eyes> : public ::UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::InputSystem::InputControl)]{};

/// @brief Field m_ProcessorStack offset 0xd8
 __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Eyes>*>  m_ProcessorStack;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Eyes>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Eyes>*>*>  processors;

constexpr void __set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Eyes>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Eyes>*>& __get_m_ProcessorStack() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Eyes>*> const& __get_m_ProcessorStack() const;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::Eyes ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::Eyes ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::Eyes ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::Eyes ReadValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::Eyes ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::InputSystem::XR::Eyes ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromObjectIntoState(::System::Object*  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueIntoState(::UnityEngine::InputSystem::XR::Eyes  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CompareValue(::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::Eyes ProcessValue(::UnityEngine::InputSystem::XR::Eyes  value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
inline TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddProcessor(::System::Object*  processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Eyes>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Eyes>*>*> get_processors() ;

static inline ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::XR::Eyes>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControl_1(InputControl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControl_1(InputControl_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputControl_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), TypeDefinitionIndex(TypeDefinitionIndex(6215))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 3892 })
// CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1<::UnityEngine::InputSystem::XR::Bone> : public ::UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::InputSystem::InputControl)]{};

/// @brief Field m_ProcessorStack offset 0xd8
 __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Bone>*>  m_ProcessorStack;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Bone>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Bone>*>*>  processors;

constexpr void __set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Bone>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Bone>*>& __get_m_ProcessorStack() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Bone>*> const& __get_m_ProcessorStack() const;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::Bone ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::Bone ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::Bone ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::Bone ReadValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::Bone ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::InputSystem::XR::Bone ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromObjectIntoState(::System::Object*  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueIntoState(::UnityEngine::InputSystem::XR::Bone  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CompareValue(::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::XR::Bone ProcessValue(::UnityEngine::InputSystem::XR::Bone  value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
inline TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddProcessor(::System::Object*  processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Bone>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::InputSystem::XR::Bone>*>*> get_processors() ;

static inline ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::XR::Bone>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControl_1(InputControl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControl_1(InputControl_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputControl_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), TypeDefinitionIndex(TypeDefinitionIndex(6215))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 3342 })
// CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1<::UnityEngine::Quaternion> : public ::UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::InputSystem::InputControl)]{};

/// @brief Field m_ProcessorStack offset 0xd8
 __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Quaternion>*>  m_ProcessorStack;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Quaternion>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Quaternion>*>*>  processors;

constexpr void __set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Quaternion>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Quaternion>*>& __get_m_ProcessorStack() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Quaternion>*> const& __get_m_ProcessorStack() const;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Quaternion ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Quaternion ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Quaternion ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Quaternion ReadValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Quaternion ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Quaternion ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromObjectIntoState(::System::Object*  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueIntoState(::UnityEngine::Quaternion  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CompareValue(::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Quaternion ProcessValue(::UnityEngine::Quaternion  value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
inline TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddProcessor(::System::Object*  processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Quaternion>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Quaternion>*>*> get_processors() ;

static inline ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Quaternion>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControl_1(InputControl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControl_1(InputControl_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputControl_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), TypeDefinitionIndex(TypeDefinitionIndex(6215))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 2704 })
// CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1<double_t> : public ::UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::InputSystem::InputControl)]{};

/// @brief Field m_ProcessorStack offset 0xd8
 __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<double_t>*>  m_ProcessorStack;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<double_t>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<double_t>*>*>  processors;

constexpr void __set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<double_t>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<double_t>*>& __get_m_ProcessorStack() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<double_t>*> const& __get_m_ProcessorStack() const;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline double_t ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
inline double_t ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline double_t ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
inline double_t ReadValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline double_t ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
inline double_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromObjectIntoState(::System::Object*  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueIntoState(double_t  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CompareValue(::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline double_t ProcessValue(double_t  value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
inline TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddProcessor(::System::Object*  processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<double_t>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<double_t>*>*> get_processors() ;

static inline ::UnityEngine::InputSystem::InputControl_1<double_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControl_1(InputControl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControl_1(InputControl_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputControl_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), TypeDefinitionIndex(TypeDefinitionIndex(6215))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 974 })
// CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1<TValue> : public ::UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::InputSystem::InputControl)]{};

/// @brief Field m_ProcessorStack offset 0xd8
 __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>  m_ProcessorStack;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<TValue>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>*>  processors;

constexpr void __set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>& __get_m_ProcessorStack() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> const& __get_m_ProcessorStack() const;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue ReadValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
inline TValue ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromObjectIntoState(::System::Object*  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueIntoState(TValue  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CompareValue(::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline TValue ProcessValue(TValue  value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
inline TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddProcessor(::System::Object*  processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<TValue>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>*> get_processors() ;

static inline ::UnityEngine::InputSystem::InputControl_1<TValue>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControl_1(InputControl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControl_1(InputControl_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputControl_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), TypeDefinitionIndex(TypeDefinitionIndex(6215))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 753 })
// CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1<uint32_t> : public ::UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::InputSystem::InputControl)]{};

/// @brief Field m_ProcessorStack offset 0xd8
 __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<uint32_t>*>  m_ProcessorStack;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<uint32_t>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<uint32_t>*>*>  processors;

constexpr void __set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<uint32_t>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<uint32_t>*>& __get_m_ProcessorStack() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<uint32_t>*> const& __get_m_ProcessorStack() const;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t ReadValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
inline uint32_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromObjectIntoState(::System::Object*  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueIntoState(uint32_t  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CompareValue(::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline uint32_t ProcessValue(uint32_t  value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
inline TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddProcessor(::System::Object*  processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<uint32_t>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<uint32_t>*>*> get_processors() ;

static inline ::UnityEngine::InputSystem::InputControl_1<uint32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControl_1(InputControl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControl_1(InputControl_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputControl_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6215)), TypeDefinitionIndex(TypeDefinitionIndex(6216))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 412 })
// CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1<::UnityEngine::Vector3> : public ::UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::InputSystem::InputControl)]{};

/// @brief Field m_ProcessorStack offset 0xd8
 __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>*>  m_ProcessorStack;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>*>*>  processors;

constexpr void __set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>*>& __get_m_ProcessorStack() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>*> const& __get_m_ProcessorStack() const;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 ReadValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Vector3 ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromObjectIntoState(::System::Object*  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueIntoState(::UnityEngine::Vector3  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CompareValue(::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector3 ProcessValue(::UnityEngine::Vector3  value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
inline TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddProcessor(::System::Object*  processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector3>*>*> get_processors() ;

static inline ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector3>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControl_1(InputControl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControl_1(InputControl_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputControl_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6215)), TypeDefinitionIndex(TypeDefinitionIndex(6216))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 411 })
// CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1<::UnityEngine::Vector2> : public ::UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::InputSystem::InputControl)]{};

/// @brief Field m_ProcessorStack offset 0xd8
 __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>*>  m_ProcessorStack;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>*>*>  processors;

constexpr void __set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>*>& __get_m_ProcessorStack() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>*> const& __get_m_ProcessorStack() const;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector2 ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector2 ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector2 ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector2 ReadValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector2 ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Vector2 ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromObjectIntoState(::System::Object*  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueIntoState(::UnityEngine::Vector2  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CompareValue(::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::Vector2 ProcessValue(::UnityEngine::Vector2  value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
inline TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddProcessor(::System::Object*  processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<::UnityEngine::Vector2>*>*> get_processors() ;

static inline ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Vector2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControl_1(InputControl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControl_1(InputControl_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputControl_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), TypeDefinitionIndex(TypeDefinitionIndex(6215))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 391 })
// CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1<float_t> : public ::UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::InputSystem::InputControl)]{};

/// @brief Field m_ProcessorStack offset 0xd8
 __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<float_t>*>  m_ProcessorStack;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<float_t>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<float_t>*>*>  processors;

constexpr void __set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<float_t>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<float_t>*>& __get_m_ProcessorStack() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<float_t>*> const& __get_m_ProcessorStack() const;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ReadValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromObjectIntoState(::System::Object*  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueIntoState(float_t  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CompareValue(::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t ProcessValue(float_t  value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
inline TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddProcessor(::System::Object*  processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<float_t>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<float_t>*>*> get_processors() ;

static inline ::UnityEngine::InputSystem::InputControl_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControl_1(InputControl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControl_1(InputControl_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputControl_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6216)), TypeDefinitionIndex(TypeDefinitionIndex(6215))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 105 })
// CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1<bool> : public ::UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::InputSystem::InputControl)]{};

/// @brief Field m_ProcessorStack offset 0xd8
 __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<bool>*>  m_ProcessorStack;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<bool>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<bool>*>*>  processors;

constexpr void __set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<bool>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<bool>*>& __get_m_ProcessorStack() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<bool>*> const& __get_m_ProcessorStack() const;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ReadValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromObjectIntoState(::System::Object*  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueIntoState(bool  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CompareValue(::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool ProcessValue(bool  value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
inline TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddProcessor(::System::Object*  processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<bool>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<bool>*>*> get_processors() ;

static inline ::UnityEngine::InputSystem::InputControl_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControl_1(InputControl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControl_1(InputControl_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputControl_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6215)), TypeDefinitionIndex(TypeDefinitionIndex(6216))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6216), inst: 98 })
// CS Name: ::UnityEngine.InputSystem::InputControl`1<TValue>*
class CORDL_TYPE InputControl_1<int32_t> : public ::UnityEngine::InputSystem::InputControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::InputSystem::InputControl)]{};

/// @brief Field m_ProcessorStack offset 0xd8
 __declspec(property(get=__get_m_ProcessorStack, put=__set_m_ProcessorStack)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<int32_t>*>  m_ProcessorStack;

 __declspec(property(get=get_valueType)) ::System::Type*  valueType;

 __declspec(property(get=get_valueSizeInBytes)) int32_t  valueSizeInBytes;

 __declspec(property(get=get_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<int32_t>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<int32_t>*>*>  processors;

constexpr void __set_m_ProcessorStack(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<int32_t>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<int32_t>*>& __get_m_ProcessorStack() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<int32_t>*> const& __get_m_ProcessorStack() const;

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Type* get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ReadValue() ;

/// @brief Method ReadValueFromPreviousFrame addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ReadValueFromPreviousFrame() ;

/// @brief Method ReadDefaultValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ReadDefaultValue() ;

/// @brief Method ReadValueFromState addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ReadValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadUnprocessedValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ReadUnprocessedValue() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t ReadUnprocessedValueFromState(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromStateIntoBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void>  statePtr, ::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize) ;

/// @brief Method WriteValueFromBufferIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void>  bufferPtr, int32_t  bufferSize, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueFromObjectIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueFromObjectIntoState(::System::Object*  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method WriteValueIntoState addr 0x0 size 0xffffffffffffffff virtual true final false
inline void WriteValueIntoState(int32_t  value, ::cordl_internals::Ptr<void>  statePtr) ;

/// @brief Method ReadValueFromBufferAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void>  buffer, int32_t  bufferSize) ;

/// @brief Method CompareValue addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool CompareValue(::cordl_internals::Ptr<void>  firstStatePtr, ::cordl_internals::Ptr<void>  secondStatePtr) ;

/// @brief Method ProcessValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t ProcessValue(int32_t  value) ;

/// @brief Method TryGetProcessor addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TProcessor>
inline TProcessor TryGetProcessor() ;

/// @brief Method AddProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddProcessor(::System::Object*  processor) ;

/// @brief Method get_processors addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<int32_t>*,::Array<::UnityEngine::InputSystem::InputProcessor_1<int32_t>*>*> get_processors() ;

static inline ::UnityEngine::InputSystem::InputControl_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputControl_1(InputControl_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputControl_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputControl_1(InputControl_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputControl_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::InputControl_1, "UnityEngine.InputSystem", "InputControl`1");
